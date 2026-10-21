#pragma once

#include "esphome/core/component.h"

namespace esphome {
namespace zigbee_light {

class ZigbeeLight : public Component {
 public:
  void setup() override;
  void dump_config() override;
};

}  // namespace zigbee_light
}  // namespace esphome
