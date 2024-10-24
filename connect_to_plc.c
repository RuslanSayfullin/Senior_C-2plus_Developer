#include <stdio.h>
#include <stdint.h>
#include <modbus.h>
#include <errno.h>

int main() {
	const char *ip_address = "192.168.1.60";
	int port = 502;
	int unit_id = 1;
	int address = 1;
	uint16_t current_value = 0;
	uint16_t new_value = 0;
	modbus_t *ctx = modbus_new_tcp(ip_address, port);
	if (ctx == NULL) {
		fprintf(stderr, "Modbus connection failed\n");
		return 1;
}

modbus_set_slave(ctx, unit_id);
modbus_set_response_timeout(ctx, 5, 0);

if (modbus_connect(ctx) == -1) {
    fprintf(stderr, "Connection to PLC failed: %s\n", modbus_strerror(errno));
    modbus_free(ctx);
    return 1;
}

if (modbus_read_registers(ctx, address, 1, &current_value) == 1) {
    printf("Enter the value to be OR'd with the current value: ");
    scanf("%hu", &new_value);
    new_value = current_value | new_value;

    if (modbus_write_register(ctx,address, new_value) == 1) {
        printf("Value after OR operation: %d\n", new_value);
    } else {
        fprintf(stderr, "Failed to write the value to the register\n");
    }
} else {
    fprintf(stderr, "Failed to read the current value from the register\n");
}

modbus_close(ctx);
modbus_free(ctx);

return 0;
}
