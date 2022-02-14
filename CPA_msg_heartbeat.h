#ifndef CPA_MSG_HEARTBEAT_H
#define CPA_MSG_HEARTBEAT_H

struct _cpa_heartbeat {
    uint8_t component_type;
    uint8_t component_id;
    uint8_t base_mode;
    uint8_t custom_mode;
    uint8_t component_status;
    uint8_t protocol_version;
};

#endif