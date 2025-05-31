#include <stdio.h>
#include<string.h>
typedef struct {
	char light;
	char fan;
	char motor;
}smartHome_t;
char getStatus(char* data, char* key) {
	char* vitri = strstr(data, key);
	if (vitri != NULL) {
		char* vitri_on = strstr(vitri, "\"on\"");
		char* vitri_off = strstr(vitri, "\"off\"");
		if (vitri_on != NULL && (vitri_off == NULL || vitri_on < vitri_off)) {
			return 1;
		}
		else if (vitri_off != NULL) {
			return 0;
		}
	}
	return -1;
}
smartHome_t device_status(char* data) {
	smartHome_t status;
	status.fan = getStatus(data, "\"fan\"");
	status.light = getStatus(data, "\"light\"");
	status.motor = getStatus(data, "\"motor\"");
	return status;
}
void main() {
	const char* data_device = "HTTP1.1 200 OK{"
		"\"light\": \"on\","
		"\"fan\": \"on\","
		"\"motor\": \"off\"}";
	smartHome_t result = device_status(data_device);
	printf("fan: %d\n", result.fan);
	printf("light: %d\n", result.light);
	printf("motor: %d\n", result.motor);
}