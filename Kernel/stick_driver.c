#include<linux/module.h>
#include<linux/kernel.h>
#include<linux/usb.h>

//probe function
static int pen_probe(struct usb_interface *interface,const struct usb_device_id *id)
{
	printk(KERN_INFO "[*]deepa,pen drive(%04X:%04X)plugged\n",id->idVendor,id->idProduct);
	return 0;
}


//disconnect
static void pen_disconnect(struct usb_interface *interface)
{
	printk(KERN_INFO "[*]deepa,pen drive removed\n");
}

//usb-device-id
static struct usb_device_id pen_table[]={
	{USB_DEVICE(0X090c,0X1000)},
	{}
};
MODULE_DEVICE_TABLE(usb,pen_table);



//usb driver
static struct usb_driver pen_driver=
{
	.name="USB stick driver",
	.id_table=pen_table,
	.probe=pen_probe,
	.disconnect=pen_disconnect,
};



static int __init pen_init(void)
{
	int ret=-1;
	printk(KERN_INFO "[*]deepa,Constructor of driver");
	printk(KERN_INFO "\tdeepa,Registering driver with kernel");
	ret=usb_register(&pen_driver);
	printk(KERN_INFO "\t deepa,Registration is complete");
	return ret;
}

static void __exit pen_exit (void)
{
	printk(KERN_INFO "[*]deepa,Destructor  of driver");
	usb_deregister(&pen_driver);	
	printk(KERN_INFO "\t deepa,DeRegistration is complete");
}

module_init(pen_init);
module_exit(pen_exit);


MODULE_LICENSE("GPL");

MODULE_AUTHOR("Deepanjali.BI");

MODULE_DESCRIPTION("USB pen Registration driver");

MODULE_VERSION("0.1");

