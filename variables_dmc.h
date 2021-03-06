#include <mcp2515.h>                                    /// https://github.com/autowp/arduino-mcp2515

struct can_frame DMC_CTRL = { 0x210, 8 };               /// Brusa DMC514: Enable power and manage control modes
struct can_frame DMC_TRQS = { 0x258, 8 };               /// Brusa DMC514: Read ready state, torque, speed, etc.
struct can_frame DMC_LIM  = { 0x211, 8 };               /// Brusa DMC514: Voltage and current limits
struct can_frame DMC_ACTV = { 0x258, 8 };               /// Brusa DMC514: Actual DC voltage and current 
struct can_frame DMC_TEMP = { 0x458, 8 };               /// Brusa DMC514: Inverter and motor temperatures
struct can_frame DMC_ERR  = { 0x25A, 8 };               /// Brusa DMC514: Errors (described in Brusa documentation) 
