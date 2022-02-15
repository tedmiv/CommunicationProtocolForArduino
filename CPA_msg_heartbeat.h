#ifndef CPA_MSG_HEARTBEAT_H
#define CPA_MSG_HEARTBEAT_H

#define CPA_MSG_ID_HEARTBEAT 0
#define CPA_MSG_HEARTBEAT_LEN 6

struct _cpa_heartbeat {
    uint8_t component_type;
    uint8_t component_id;
    uint8_t base_mode;
    uint8_t custom_mode;
    uint8_t communication_link_quality;
    uint8_t protocol_version;
};

#endif