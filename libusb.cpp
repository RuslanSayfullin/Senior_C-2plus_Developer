#include <libub-1.0/libusb.h>

int main() {
    libusb_context *ctx = nullptr;
    libusb_init(&ctx);

    libusb_device_handle *dev_handle;
    dev_handle = libusb_open_device_with_vid_pid(ctx, 0x1234, 0x5678);

    unsigned char data[64];
    int transferred;
    libusb_bulk_transfer(dev_handle, 0x81, data, sizeof(data), &transferred, 0);

    // обработка прочитанных данных

    libusb_close(dev_handle);
    libusb_exit(ctx);

    return 0;
}
