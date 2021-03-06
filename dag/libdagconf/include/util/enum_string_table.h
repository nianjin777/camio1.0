#ifndef ENUM_STRING_TABLE_H
#define ENUM_STRING_TABLE_H

#include "dag_attribute_codes.h"
#include "dag_config.h"
#include "dagpci.h"

const char* payload_mapping_to_string(payload_mapping_t payload_mapping);
payload_mapping_t string_to_payload_mapping(const char* string);
const char* line_rate_to_string(line_rate_t line_rate);
line_rate_t string_to_line_rate(const char* string);
const char* line_type_to_string(line_type_t line_rate);
line_type_t string_to_line_type(const char* string);
const char* vc_size_to_string(vc_size_t vc_size);
vc_size_t string_to_vc_size(const char* string);
const char* termination_to_string(termination_t vc_size);
termination_t string_to_termination(const char* string);
const char* pci_bus_speed_to_string(pci_bus_speed_t pci_bus_speed);
pci_bus_speed_t string_to_pci_bus_speed(const char* string);
const char* pci_bus_type_to_string(pci_bus_type_t pci_bus_type);
const char* crc_to_string(crc_t crc);
crc_t string_to_crc(const char* string);
const char* network_mode_to_string(network_mode_t mode);
network_mode_t string_to_network_mode(const char* string);
const char* framing_mode_to_string(framing_mode_t mode);
framing_mode_t string_to_framing_mode(const char* string);
const char* master_slave_to_string(master_slave_t ms);
master_slave_t string_to_master_slave(const char* string);
const char* sonet_type_to_string(sonet_type_t ms);
sonet_type_t string_to_sonet_type(const char* string);
const char* dag71s_channelized_rev_id_to_string(dag71s_channelized_rev_id_t ms);
dag71s_channelized_rev_id_t string_to_dag71s_channelized_rev_id(const char* string);
const char* terf_strip_to_string(terf_strip_t ts);
terf_strip_t string_to_terf_strip(const char* string);
const char* time_mode_to_string(terf_time_mode_t ts);
terf_time_mode_t string_to_time_mode(const char* string);
const char* steer_to_string(steer_t steer);
steer_t string_to_steer(const char* string);
const char* ethernet_mode_to_string(ethernet_mode_t em);
ethernet_mode_t string_to_ethernet_mode(const char* string);
const char* zero_code_to_string(zero_code_suppress_t code);
zero_code_suppress_t string_to_zero_code(const char* string);
const char* card_type_to_string(dag_card_t card_type);
dag_card_t string_to_card_type(const char* string);
const char* active_firmware_to_string(dag_firmware_t firmware);
dag_firmware_t string_to_active_firmware(const char* string);
const char* coprocessor_to_string(coprocessor_t copro);
coprocessor_t string_to_coprocessor(const char* string);
const char* tx_command_to_string(tx_command_t tx_command);
tx_command_t string_to_tx_command(const char* string);
const char* counter_select_to_string(counter_select_t line_rate);
counter_select_t string_to_counter_select(const char* string);
/*prototypes to convert from component code to string 
and from string to component code
Note this is not the component name
*/
const char* dag_component_code_to_string(dag_component_code_t comp_code);
/* converts component code string to enum value */
dag_component_code_t string_to_dag_component_code(const char* string);

const char* dag_attribute_code_to_string(dag_attribute_code_t comp_code);
/* converts component code string to enum value */
dag_attribute_code_t string_to_dag_attribute_code(const char* string);

const char* erfmux_steer_to_string(erfmux_steer_t val);
erfmux_steer_t string_to_erfmux_steer(const char* string);

#endif

