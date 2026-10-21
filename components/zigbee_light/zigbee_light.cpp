#include "zigbee_light.h"
#include "esphome/core/log.h"

namespace esphome {
namespace zigbee_light {

static const char *const TAG = "zigbee_light";

void ZigbeeLight::setup() {
  ESP_LOGI(TAG, "Jindacek Zigbee Light initialized");
}

void ZigbeeLight::dump_config() {
  ESP_LOGCONFIG(TAG, "Jindacek Zigbee Light");
  ESP_LOGCONFIG(TAG, "  Mode: Virtual Dimmable Light");
  ESP_LOGCONFIG(TAG, "  Output: None");
}

}  // namespace zigbee_light
}  // namespace esphome
