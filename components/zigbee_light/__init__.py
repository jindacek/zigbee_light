import esphome.codegen as cg
import esphome.config_validation as cv

DEPENDENCIES = ["zigbee"]

zigbee_light_ns = cg.esphome_ns.namespace("zigbee_light")
ZigbeeLight = zigbee_light_ns.class_("ZigbeeLight", cg.Component)

CONFIG_SCHEMA = cv.Schema({
    cv.GenerateID(): cv.declare_id(ZigbeeLight),
}).extend(cv.COMPONENT_SCHEMA)


async def to_code(config):
    var = cg.new_Pvariable(config[cv.CONF_ID])
    await cg.register_component(var, config)
