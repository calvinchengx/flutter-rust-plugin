#include <stdarg.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>

#define SEGMENT_SIZE 8

#define NUM_SEGMENTS 32

char *get_client_master_key(const char *c_endpoint, const char *c_auth_token);

char *sign_message(const char *c_endpoint,
                   const char *c_auth_token,
                   const char *c_message_le_hex,
                   const char *c_master_key_json,
                   int32_t c_x_pos,
                   int32_t c_y_pos,
                   const char *c_id);

char *decrypt_party_one_master_key(const char *c_master_key_two_json,
                                   const char *c_helgamal_segmented_json,
                                   const char *c_private_key);

char *get_child_mk1(const char *c_master_key_one_json, int32_t c_x_pos, int32_t c_y_pos);

char *get_child_mk2(const char *c_master_key_two_json, int32_t c_x_pos, int32_t c_y_pos);

char *construct_single_private_key(const char *c_mk1_x1, const char *c_mk2_x2);
