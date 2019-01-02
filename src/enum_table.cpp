/* Copyright © 2008-2019 Pioneer Developers. See AUTHORS.txt for details */
/* Licensed under the terms of the GPL v3. See licenses/GPL-3.txt        */

/* THIS FILE IS AUTO-GENERATED, CHANGES WILL BE OVERWRITTEN */
/* enum table generated by scan_enums.py */

#include "enum_table.h"
#include "DynamicBody.h"
#include "LuaEngine.h"
#include "LuaFileSystem.h"
#include "Object.h"
#include "Polit.h"
#include "Propulsion.h"
#include "Ship.h"
#include "ShipAICmd.h"
#include "ShipController.h"
#include "ShipType.h"
#include "galaxy/Economy.h"
#include "galaxy/StarSystem.h"
#include "gameui/Face.h"
#include "gameui/LabelOverlay.h"
#include "scenegraph/Model.h"
#include "ui/Align.h"
#include "ui/Animation.h"
#include "ui/Event.h"
#include "ui/Expand.h"
#include "ui/Gradient.h"
#include "ui/Margin.h"
#include "ui/NumberLabel.h"
#include "ui/Table.h"
#include "ui/Widget.h"

const struct EnumItem ENUM_ShipAIError[] = {
	{ "NONE", int(Ship::AIERROR_NONE) },
	{ "GRAV_TOO_HIGH", int(Ship::AIERROR_GRAV_TOO_HIGH) },
	{ "REFUSED_PERM", int(Ship::AIERROR_REFUSED_PERM) },
	{ "ORBIT_IMPOSSIBLE", int(Ship::AIERROR_ORBIT_IMPOSSIBLE) },
	{ 0, 0 },
};

const struct EnumItem ENUM_DetailLevel[] = {
	{ "VERY_LOW", int(LuaEngine::DETAIL_VERY_LOW) },
	{ "LOW", int(LuaEngine::DETAIL_LOW) },
	{ "MEDIUM", int(LuaEngine::DETAIL_MEDIUM) },
	{ "HIGH", int(LuaEngine::DETAIL_HIGH) },
	{ "VERY_HIGH", int(LuaEngine::DETAIL_VERY_HIGH) },
	{ 0, 0 },
};

const struct EnumItem ENUM_FileSystemRoot[] = {
	{ "USER", int(LuaFileSystem::ROOT_USER) },
	{ "DATA", int(LuaFileSystem::ROOT_DATA) },
	{ 0, 0 },
};

const struct EnumItem ENUM_PhysicsObjectType[] = {
	{ "BODY", int(Object::BODY) },
	{ "MODELBODY", int(Object::MODELBODY) },
	{ "SHIP", int(Object::SHIP) },
	{ "PLAYER", int(Object::PLAYER) },
	{ "SPACESTATION", int(Object::SPACESTATION) },
	{ "PLANET", int(Object::PLANET) },
	{ "STAR", int(Object::STAR) },
	{ "CARGOBODY", int(Object::CARGOBODY) },
	{ "MISSILE", int(Object::MISSILE) },
	{ 0, 0 },
};

const struct EnumItem ENUM_PolitEcon[] = {
	{ "NONE", int(Polit::ECON_NONE) },
	{ "VERY_CAPITALIST", int(Polit::ECON_VERY_CAPITALIST) },
	{ "CAPITALIST", int(Polit::ECON_CAPITALIST) },
	{ "MIXED", int(Polit::ECON_MIXED) },
	{ "PLANNED", int(Polit::ECON_PLANNED) },
	{ 0, 0 },
};

const struct EnumItem ENUM_PolitGovType[] = {
	{ "NONE", int(Polit::GOV_NONE) },
	{ "EARTHCOLONIAL", int(Polit::GOV_EARTHCOLONIAL) },
	{ "EARTHDEMOC", int(Polit::GOV_EARTHDEMOC) },
	{ "EMPIRERULE", int(Polit::GOV_EMPIRERULE) },
	{ "CISLIBDEM", int(Polit::GOV_CISLIBDEM) },
	{ "CISSOCDEM", int(Polit::GOV_CISSOCDEM) },
	{ "LIBDEM", int(Polit::GOV_LIBDEM) },
	{ "CORPORATE", int(Polit::GOV_CORPORATE) },
	{ "SOCDEM", int(Polit::GOV_SOCDEM) },
	{ "EARTHMILDICT", int(Polit::GOV_EARTHMILDICT) },
	{ "MILDICT1", int(Polit::GOV_MILDICT1) },
	{ "MILDICT2", int(Polit::GOV_MILDICT2) },
	{ "EMPIREMILDICT", int(Polit::GOV_EMPIREMILDICT) },
	{ "COMMUNIST", int(Polit::GOV_COMMUNIST) },
	{ "PLUTOCRATIC", int(Polit::GOV_PLUTOCRATIC) },
	{ "DISORDER", int(Polit::GOV_DISORDER) },
	{ 0, 0 },
};

const struct EnumItem ENUM_ShipTypeThruster[] = {
	{ "REVERSE", int(Thruster::THRUSTER_REVERSE) },
	{ "FORWARD", int(Thruster::THRUSTER_FORWARD) },
	{ "UP", int(Thruster::THRUSTER_UP) },
	{ "DOWN", int(Thruster::THRUSTER_DOWN) },
	{ "LEFT", int(Thruster::THRUSTER_LEFT) },
	{ "RIGHT", int(Thruster::THRUSTER_RIGHT) },
	{ 0, 0 },
};

const struct EnumItem ENUM_PropulsionFuelStatus[] = {
	{ "OK", int(Propulsion::FUEL_OK) },
	{ "WARNING", int(Propulsion::FUEL_WARNING) },
	{ "EMPTY", int(Propulsion::FUEL_EMPTY) },
	{ 0, 0 },
};

const struct EnumItem ENUM_ShipFlightState[] = {
	{ "FLYING", int(Ship::FLYING) },
	{ "DOCKING", int(Ship::DOCKING) },
	{ "UNDOCKING", int(Ship::UNDOCKING) },
	{ "DOCKED", int(Ship::DOCKED) },
	{ "LANDED", int(Ship::LANDED) },
	{ "JUMPING", int(Ship::JUMPING) },
	{ "HYPERSPACE", int(Ship::HYPERSPACE) },
	{ 0, 0 },
};

const struct EnumItem ENUM_ShipJumpStatus[] = {
	{ "OK", int(Ship::HYPERJUMP_OK) },
	{ "CURRENT_SYSTEM", int(Ship::HYPERJUMP_CURRENT_SYSTEM) },
	{ "NO_DRIVE", int(Ship::HYPERJUMP_NO_DRIVE) },
	{ "INITIATED", int(Ship::HYPERJUMP_INITIATED) },
	{ "DRIVE_ACTIVE", int(Ship::HYPERJUMP_DRIVE_ACTIVE) },
	{ "OUT_OF_RANGE", int(Ship::HYPERJUMP_OUT_OF_RANGE) },
	{ "INSUFFICIENT_FUEL", int(Ship::HYPERJUMP_INSUFFICIENT_FUEL) },
	{ "SAFETY_LOCKOUT", int(Ship::HYPERJUMP_SAFETY_LOCKOUT) },
	{ 0, 0 },
};

const struct EnumItem ENUM_ShipAlertStatus[] = {
	{ "NONE", int(Ship::ALERT_NONE) },
	{ "SHIP_NEARBY", int(Ship::ALERT_SHIP_NEARBY) },
	{ "SHIP_FIRING", int(Ship::ALERT_SHIP_FIRING) },
	{ 0, 0 },
};

const struct EnumItem ENUM_ShipAICmdName[] = {
	{ "CMD_NONE", int(AICommand::CmdName::CMD_NONE) },
	{ "CMD_DOCK", int(AICommand::CmdName::CMD_DOCK) },
	{ "CMD_FLYTO", int(AICommand::CmdName::CMD_FLYTO) },
	{ "CMD_FLYAROUND", int(AICommand::CmdName::CMD_FLYAROUND) },
	{ "CMD_KILL", int(AICommand::CmdName::CMD_KILL) },
	{ "CMD_KAMIKAZE", int(AICommand::CmdName::CMD_KAMIKAZE) },
	{ "CMD_HOLDPOSITION", int(AICommand::CmdName::CMD_HOLDPOSITION) },
	{ "CMD_FORMATION", int(AICommand::CmdName::CMD_FORMATION) },
	{ 0, 0 },
};

const struct EnumItem ENUM_ShipControllerFlightControlState[] = {
	{ "CONTROL_MANUAL", int(FlightControlState::CONTROL_MANUAL) },
	{ "CONTROL_FIXSPEED", int(FlightControlState::CONTROL_FIXSPEED) },
	{ "CONTROL_FIXHEADING_FORWARD", int(FlightControlState::CONTROL_FIXHEADING_FORWARD) },
	{ "CONTROL_FIXHEADING_BACKWARD", int(FlightControlState::CONTROL_FIXHEADING_BACKWARD) },
	{ "CONTROL_FIXHEADING_NORMAL", int(FlightControlState::CONTROL_FIXHEADING_NORMAL) },
	{ "CONTROL_FIXHEADING_ANTINORMAL", int(FlightControlState::CONTROL_FIXHEADING_ANTINORMAL) },
	{ "CONTROL_FIXHEADING_RADIALLY_INWARD", int(FlightControlState::CONTROL_FIXHEADING_RADIALLY_INWARD) },
	{ "CONTROL_FIXHEADING_RADIALLY_OUTWARD", int(FlightControlState::CONTROL_FIXHEADING_RADIALLY_OUTWARD) },
	{ "CONTROL_FIXHEADING_KILLROT", int(FlightControlState::CONTROL_FIXHEADING_KILLROT) },
	{ "CONTROL_AUTOPILOT", int(FlightControlState::CONTROL_AUTOPILOT) },
	{ 0, 0 },
};

const struct EnumItem ENUM_DualLaserOrientation[] = {
	{ "HORIZONTAL", int(ShipType::DUAL_LASERS_HORIZONTAL) },
	{ "VERTICAL", int(ShipType::DUAL_LASERS_VERTICAL) },
	{ 0, 0 },
};

const struct EnumItem ENUM_ShipTypeTag[] = {
	{ "NONE", int(ShipType::TAG_NONE) },
	{ "SHIP", int(ShipType::TAG_SHIP) },
	{ "STATIC_SHIP", int(ShipType::TAG_STATIC_SHIP) },
	{ "MISSILE", int(ShipType::TAG_MISSILE) },
	{ 0, 0 },
};

const struct EnumItem ENUM_EconType[] = {
	{ "MINING", int(GalacticEconomy::ECON_MINING) },
	{ "AGRICULTURE", int(GalacticEconomy::ECON_AGRICULTURE) },
	{ "INDUSTRY", int(GalacticEconomy::ECON_INDUSTRY) },
	{ 0, 0 },
};

const struct EnumItem ENUM_CommodityType[] = {
	{ "HYDROGEN", int(GalacticEconomy::Commodity::HYDROGEN) },
	{ "LIQUID_OXYGEN", int(GalacticEconomy::Commodity::LIQUID_OXYGEN) },
	{ "METAL_ORE", int(GalacticEconomy::Commodity::METAL_ORE) },
	{ "CARBON_ORE", int(GalacticEconomy::Commodity::CARBON_ORE) },
	{ "METAL_ALLOYS", int(GalacticEconomy::Commodity::METAL_ALLOYS) },
	{ "PLASTICS", int(GalacticEconomy::Commodity::PLASTICS) },
	{ "FRUIT_AND_VEG", int(GalacticEconomy::Commodity::FRUIT_AND_VEG) },
	{ "ANIMAL_MEAT", int(GalacticEconomy::Commodity::ANIMAL_MEAT) },
	{ "LIVE_ANIMALS", int(GalacticEconomy::Commodity::LIVE_ANIMALS) },
	{ "LIQUOR", int(GalacticEconomy::Commodity::LIQUOR) },
	{ "GRAIN", int(GalacticEconomy::Commodity::GRAIN) },
	{ "TEXTILES", int(GalacticEconomy::Commodity::TEXTILES) },
	{ "FERTILIZER", int(GalacticEconomy::Commodity::FERTILIZER) },
	{ "WATER", int(GalacticEconomy::Commodity::WATER) },
	{ "MEDICINES", int(GalacticEconomy::Commodity::MEDICINES) },
	{ "CONSUMER_GOODS", int(GalacticEconomy::Commodity::CONSUMER_GOODS) },
	{ "COMPUTERS", int(GalacticEconomy::Commodity::COMPUTERS) },
	{ "ROBOTS", int(GalacticEconomy::Commodity::ROBOTS) },
	{ "PRECIOUS_METALS", int(GalacticEconomy::Commodity::PRECIOUS_METALS) },
	{ "INDUSTRIAL_MACHINERY", int(GalacticEconomy::Commodity::INDUSTRIAL_MACHINERY) },
	{ "FARM_MACHINERY", int(GalacticEconomy::Commodity::FARM_MACHINERY) },
	{ "MINING_MACHINERY", int(GalacticEconomy::Commodity::MINING_MACHINERY) },
	{ "AIR_PROCESSORS", int(GalacticEconomy::Commodity::AIR_PROCESSORS) },
	{ "SLAVES", int(GalacticEconomy::Commodity::SLAVES) },
	{ "HAND_WEAPONS", int(GalacticEconomy::Commodity::HAND_WEAPONS) },
	{ "BATTLE_WEAPONS", int(GalacticEconomy::Commodity::BATTLE_WEAPONS) },
	{ "NERVE_GAS", int(GalacticEconomy::Commodity::NERVE_GAS) },
	{ "NARCOTICS", int(GalacticEconomy::Commodity::NARCOTICS) },
	{ "MILITARY_FUEL", int(GalacticEconomy::Commodity::MILITARY_FUEL) },
	{ "RUBBISH", int(GalacticEconomy::Commodity::RUBBISH) },
	{ "RADIOACTIVES", int(GalacticEconomy::Commodity::RADIOACTIVES) },
	{ 0, 0 },
};

const struct EnumItem ENUM_BodyType[] = {
	{ "GRAVPOINT", int(SystemBody::TYPE_GRAVPOINT) },
	{ "BROWN_DWARF", int(SystemBody::TYPE_BROWN_DWARF) },
	{ "WHITE_DWARF", int(SystemBody::TYPE_WHITE_DWARF) },
	{ "STAR_M", int(SystemBody::TYPE_STAR_M) },
	{ "STAR_K", int(SystemBody::TYPE_STAR_K) },
	{ "STAR_G", int(SystemBody::TYPE_STAR_G) },
	{ "STAR_F", int(SystemBody::TYPE_STAR_F) },
	{ "STAR_A", int(SystemBody::TYPE_STAR_A) },
	{ "STAR_B", int(SystemBody::TYPE_STAR_B) },
	{ "STAR_O", int(SystemBody::TYPE_STAR_O) },
	{ "STAR_M_GIANT", int(SystemBody::TYPE_STAR_M_GIANT) },
	{ "STAR_K_GIANT", int(SystemBody::TYPE_STAR_K_GIANT) },
	{ "STAR_G_GIANT", int(SystemBody::TYPE_STAR_G_GIANT) },
	{ "STAR_F_GIANT", int(SystemBody::TYPE_STAR_F_GIANT) },
	{ "STAR_A_GIANT", int(SystemBody::TYPE_STAR_A_GIANT) },
	{ "STAR_B_GIANT", int(SystemBody::TYPE_STAR_B_GIANT) },
	{ "STAR_O_GIANT", int(SystemBody::TYPE_STAR_O_GIANT) },
	{ "STAR_M_SUPER_GIANT", int(SystemBody::TYPE_STAR_M_SUPER_GIANT) },
	{ "STAR_K_SUPER_GIANT", int(SystemBody::TYPE_STAR_K_SUPER_GIANT) },
	{ "STAR_G_SUPER_GIANT", int(SystemBody::TYPE_STAR_G_SUPER_GIANT) },
	{ "STAR_F_SUPER_GIANT", int(SystemBody::TYPE_STAR_F_SUPER_GIANT) },
	{ "STAR_A_SUPER_GIANT", int(SystemBody::TYPE_STAR_A_SUPER_GIANT) },
	{ "STAR_B_SUPER_GIANT", int(SystemBody::TYPE_STAR_B_SUPER_GIANT) },
	{ "STAR_O_SUPER_GIANT", int(SystemBody::TYPE_STAR_O_SUPER_GIANT) },
	{ "STAR_M_HYPER_GIANT", int(SystemBody::TYPE_STAR_M_HYPER_GIANT) },
	{ "STAR_K_HYPER_GIANT", int(SystemBody::TYPE_STAR_K_HYPER_GIANT) },
	{ "STAR_G_HYPER_GIANT", int(SystemBody::TYPE_STAR_G_HYPER_GIANT) },
	{ "STAR_F_HYPER_GIANT", int(SystemBody::TYPE_STAR_F_HYPER_GIANT) },
	{ "STAR_A_HYPER_GIANT", int(SystemBody::TYPE_STAR_A_HYPER_GIANT) },
	{ "STAR_B_HYPER_GIANT", int(SystemBody::TYPE_STAR_B_HYPER_GIANT) },
	{ "STAR_O_HYPER_GIANT", int(SystemBody::TYPE_STAR_O_HYPER_GIANT) },
	{ "STAR_M_WF", int(SystemBody::TYPE_STAR_M_WF) },
	{ "STAR_B_WF", int(SystemBody::TYPE_STAR_B_WF) },
	{ "STAR_O_WF", int(SystemBody::TYPE_STAR_O_WF) },
	{ "STAR_S_BH", int(SystemBody::TYPE_STAR_S_BH) },
	{ "STAR_IM_BH", int(SystemBody::TYPE_STAR_IM_BH) },
	{ "STAR_SM_BH", int(SystemBody::TYPE_STAR_SM_BH) },
	{ "PLANET_GAS_GIANT", int(SystemBody::TYPE_PLANET_GAS_GIANT) },
	{ "PLANET_ASTEROID", int(SystemBody::TYPE_PLANET_ASTEROID) },
	{ "PLANET_TERRESTRIAL", int(SystemBody::TYPE_PLANET_TERRESTRIAL) },
	{ "STARPORT_ORBITAL", int(SystemBody::TYPE_STARPORT_ORBITAL) },
	{ "STARPORT_SURFACE", int(SystemBody::TYPE_STARPORT_SURFACE) },
	{ 0, 0 },
};

const struct EnumItem ENUM_BodySuperType[] = {
	{ "NONE", int(SystemBody::SUPERTYPE_NONE) },
	{ "STAR", int(SystemBody::SUPERTYPE_STAR) },
	{ "ROCKY_PLANET", int(SystemBody::SUPERTYPE_ROCKY_PLANET) },
	{ "GAS_GIANT", int(SystemBody::SUPERTYPE_GAS_GIANT) },
	{ "STARPORT", int(SystemBody::SUPERTYPE_STARPORT) },
	{ 0, 0 },
};

const struct EnumItem ENUM_GameUIFaceFlags[] = {
	{ "RAND", int(GameUI::Face::RAND) },
	{ "MALE", int(GameUI::Face::MALE) },
	{ "FEMALE", int(GameUI::Face::FEMALE) },
	{ "ARMOUR", int(GameUI::Face::ARMOUR) },
	{ 0, 0 },
};

const struct EnumItem ENUM_GameUIMarkerStyle[] = {
	{ "NONE", int(GameUI::LabelOverlay::MARKER_NONE) },
	{ "DOT", int(GameUI::LabelOverlay::MARKER_DOT) },
	{ 0, 0 },
};

const struct EnumItem ENUM_ModelDebugFlags[] = {
	{ "NONE", int(SceneGraph::Model::DEBUG_NONE) },
	{ "BBOX", int(SceneGraph::Model::DEBUG_BBOX) },
	{ "COLLMESH", int(SceneGraph::Model::DEBUG_COLLMESH) },
	{ "WIREFRAME", int(SceneGraph::Model::DEBUG_WIREFRAME) },
	{ "TAGS", int(SceneGraph::Model::DEBUG_TAGS) },
	{ "DOCKING", int(SceneGraph::Model::DEBUG_DOCKING) },
	{ 0, 0 },
};

const struct EnumItem ENUM_UIAlignDirection[] = {
	{ "TOP_LEFT", int(UI::Align::TOP_LEFT) },
	{ "TOP", int(UI::Align::TOP) },
	{ "TOP_RIGHT", int(UI::Align::TOP_RIGHT) },
	{ "LEFT", int(UI::Align::LEFT) },
	{ "MIDDLE", int(UI::Align::MIDDLE) },
	{ "RIGHT", int(UI::Align::RIGHT) },
	{ "BOTTOM_LEFT", int(UI::Align::BOTTOM_LEFT) },
	{ "BOTTOM", int(UI::Align::BOTTOM) },
	{ "BOTTOM_RIGHT", int(UI::Align::BOTTOM_RIGHT) },
	{ 0, 0 },
};

const struct EnumItem ENUM_UIAnimationType[] = {
	{ "IN", int(UI::Animation::TYPE_IN) },
	{ "OUT", int(UI::Animation::TYPE_OUT) },
	{ "IN_OUT", int(UI::Animation::TYPE_IN_OUT) },
	{ 0, 0 },
};

const struct EnumItem ENUM_UIAnimationEasing[] = {
	{ "ZERO", int(UI::Animation::EASING_ZERO) },
	{ "ONE", int(UI::Animation::EASING_ONE) },
	{ "LINEAR", int(UI::Animation::EASING_LINEAR) },
	{ "QUAD", int(UI::Animation::EASING_QUAD) },
	{ "CUBIC", int(UI::Animation::EASING_CUBIC) },
	{ "QUART", int(UI::Animation::EASING_QUART) },
	{ "QUINT", int(UI::Animation::EASING_QUINT) },
	{ "SINE", int(UI::Animation::EASING_SINE) },
	{ "EXPO", int(UI::Animation::EASING_EXPO) },
	{ "CIRC", int(UI::Animation::EASING_CIRC) },
	{ 0, 0 },
};

const struct EnumItem ENUM_UIAnimationTarget[] = {
	{ "PAUSE", int(UI::Animation::TARGET_PAUSE) },
	{ "OPACITY", int(UI::Animation::TARGET_OPACITY) },
	{ "POSITION_X", int(UI::Animation::TARGET_POSITION_X) },
	{ "POSITION_Y", int(UI::Animation::TARGET_POSITION_Y) },
	{ "POSITION_X_REV", int(UI::Animation::TARGET_POSITION_X_REV) },
	{ "POSITION_Y_REV", int(UI::Animation::TARGET_POSITION_Y_REV) },
	{ 0, 0 },
};

const struct EnumItem ENUM_UIEventType[] = {
	{ "KEYBOARD", int(UI::Event::KEYBOARD) },
	{ "TEXT_INPUT", int(UI::Event::TEXT_INPUT) },
	{ "MOUSE_BUTTON", int(UI::Event::MOUSE_BUTTON) },
	{ "MOUSE_MOTION", int(UI::Event::MOUSE_MOTION) },
	{ "MOUSE_WHEEL", int(UI::Event::MOUSE_WHEEL) },
	{ "JOYSTICK_AXIS_MOTION", int(UI::Event::JOYSTICK_AXIS_MOTION) },
	{ "JOYSTICK_HAT_MOTION", int(UI::Event::JOYSTICK_HAT_MOTION) },
	{ "JOYSTICK_BUTTON", int(UI::Event::JOYSTICK_BUTTON) },
	{ 0, 0 },
};

const struct EnumItem ENUM_UIKeyboardAction[] = {
	{ "DOWN", int(UI::KeyboardEvent::KEY_DOWN) },
	{ "UP", int(UI::KeyboardEvent::KEY_UP) },
	{ 0, 0 },
};

const struct EnumItem ENUM_UIMouseButtonAction[] = {
	{ "DOWN", int(UI::MouseButtonEvent::BUTTON_DOWN) },
	{ "UP", int(UI::MouseButtonEvent::BUTTON_UP) },
	{ 0, 0 },
};

const struct EnumItem ENUM_UIMouseButtonType[] = {
	{ "LEFT", int(UI::MouseButtonEvent::BUTTON_LEFT) },
	{ "MIDDLE", int(UI::MouseButtonEvent::BUTTON_MIDDLE) },
	{ "RIGHT", int(UI::MouseButtonEvent::BUTTON_RIGHT) },
	{ 0, 0 },
};

const struct EnumItem ENUM_UIMouseWheelDirection[] = {
	{ "UP", int(UI::MouseWheelEvent::WHEEL_UP) },
	{ "DOWN", int(UI::MouseWheelEvent::WHEEL_DOWN) },
	{ 0, 0 },
};

const struct EnumItem ENUM_UIJoystickHatDirection[] = {
	{ "CENTRE", int(UI::JoystickHatMotionEvent::HAT_CENTRE) },
	{ "UP", int(UI::JoystickHatMotionEvent::HAT_UP) },
	{ "RIGHT", int(UI::JoystickHatMotionEvent::HAT_RIGHT) },
	{ "DOWN", int(UI::JoystickHatMotionEvent::HAT_DOWN) },
	{ "LEFT", int(UI::JoystickHatMotionEvent::HAT_LEFT) },
	{ "RIGHTUP", int(UI::JoystickHatMotionEvent::HAT_RIGHTUP) },
	{ "RIGHTDOWN", int(UI::JoystickHatMotionEvent::HAT_RIGHTDOWN) },
	{ "LEFTUP", int(UI::JoystickHatMotionEvent::HAT_LEFTUP) },
	{ "LEFTDOWN", int(UI::JoystickHatMotionEvent::HAT_LEFTDOWN) },
	{ 0, 0 },
};

const struct EnumItem ENUM_UIJoystickButtonAction[] = {
	{ "DOWN", int(UI::JoystickButtonEvent::BUTTON_DOWN) },
	{ "UP", int(UI::JoystickButtonEvent::BUTTON_UP) },
	{ 0, 0 },
};

const struct EnumItem ENUM_UIExpandDirection[] = {
	{ "BOTH", int(UI::Expand::BOTH) },
	{ "HORIZONTAL", int(UI::Expand::HORIZONTAL) },
	{ "VERTICAL", int(UI::Expand::VERTICAL) },
	{ 0, 0 },
};

const struct EnumItem ENUM_UIGradientDirection[] = {
	{ "HORIZONTAL", int(UI::Gradient::HORIZONTAL) },
	{ "VERTICAL", int(UI::Gradient::VERTICAL) },
	{ 0, 0 },
};

const struct EnumItem ENUM_UIMarginDirection[] = {
	{ "ALL", int(UI::Margin::ALL) },
	{ "HORIZONTAL", int(UI::Margin::HORIZONTAL) },
	{ "VERTICAL", int(UI::Margin::VERTICAL) },
	{ "LEFT", int(UI::Margin::LEFT) },
	{ "RIGHT", int(UI::Margin::RIGHT) },
	{ "TOP", int(UI::Margin::TOP) },
	{ "BOTTOM", int(UI::Margin::BOTTOM) },
	{ 0, 0 },
};

const struct EnumItem ENUM_UINumberLabelFormat[] = {
	{ "NUMBER", int(UI::NumberLabel::FORMAT_NUMBER) },
	{ "NUMBER_2DP", int(UI::NumberLabel::FORMAT_NUMBER_2DP) },
	{ "INTEGER", int(UI::NumberLabel::FORMAT_INTEGER) },
	{ "PERCENT", int(UI::NumberLabel::FORMAT_PERCENT) },
	{ "PERCENT_INTEGER", int(UI::NumberLabel::FORMAT_PERCENT_INTEGER) },
	{ "MONEY", int(UI::NumberLabel::FORMAT_MONEY) },
	{ "MASS_TONNES", int(UI::NumberLabel::FORMAT_MASS_TONNES) },
	{ "DISTANCE_M", int(UI::NumberLabel::FORMAT_DISTANCE_M) },
	{ "DISTANCE_LY", int(UI::NumberLabel::FORMAT_DISTANCE_LY) },
	{ 0, 0 },
};

const struct EnumItem ENUM_UITableRowAlignDirection[] = {
	{ "TOP", int(UI::Table::ROW_TOP) },
	{ "CENTER", int(UI::Table::ROW_CENTER) },
	{ "BOTTOM", int(UI::Table::ROW_BOTTOM) },
	{ 0, 0 },
};

const struct EnumItem ENUM_UITableColumnAlignDirection[] = {
	{ "LEFT", int(UI::Table::COLUMN_LEFT) },
	{ "CENTER", int(UI::Table::COLUMN_CENTER) },
	{ "RIGHT", int(UI::Table::COLUMN_RIGHT) },
	{ "JUSTIFY", int(UI::Table::COLUMN_JUSTIFY) },
	{ 0, 0 },
};

const struct EnumItem ENUM_UISizeControl[] = {
	{ "NO_WIDTH", int(UI::Widget::NO_WIDTH) },
	{ "NO_HEIGHT", int(UI::Widget::NO_HEIGHT) },
	{ "EXPAND_WIDTH", int(UI::Widget::EXPAND_WIDTH) },
	{ "EXPAND_HEIGHT", int(UI::Widget::EXPAND_HEIGHT) },
	{ "PRESERVE_ASPECT", int(UI::Widget::PRESERVE_ASPECT) },
	{ 0, 0 },
};

const struct EnumItem ENUM_UIFont[] = {
	{ "XSMALL", int(UI::Widget::FONT_XSMALL) },
	{ "SMALL", int(UI::Widget::FONT_SMALL) },
	{ "NORMAL", int(UI::Widget::FONT_NORMAL) },
	{ "LARGE", int(UI::Widget::FONT_LARGE) },
	{ "XLARGE", int(UI::Widget::FONT_XLARGE) },
	{ "HEADING_XSMALL", int(UI::Widget::FONT_HEADING_XSMALL) },
	{ "HEADING_SMALL", int(UI::Widget::FONT_HEADING_SMALL) },
	{ "HEADING_NORMAL", int(UI::Widget::FONT_HEADING_NORMAL) },
	{ "HEADING_LARGE", int(UI::Widget::FONT_HEADING_LARGE) },
	{ "HEADING_XLARGE", int(UI::Widget::FONT_HEADING_XLARGE) },
	{ "MONO_XSMALL", int(UI::Widget::FONT_MONO_XSMALL) },
	{ "MONO_SMALL", int(UI::Widget::FONT_MONO_SMALL) },
	{ "MONO_NORMAL", int(UI::Widget::FONT_MONO_NORMAL) },
	{ "MONO_LARGE", int(UI::Widget::FONT_MONO_LARGE) },
	{ "MONO_XLARGE", int(UI::Widget::FONT_MONO_XLARGE) },
	{ "INHERIT", int(UI::Widget::FONT_INHERIT) },
	{ 0, 0 },
};

const struct EnumTable ENUM_TABLES[] = {
	{ "ShipAIError", ENUM_ShipAIError },
	{ "DetailLevel", ENUM_DetailLevel },
	{ "FileSystemRoot", ENUM_FileSystemRoot },
	{ "PhysicsObjectType", ENUM_PhysicsObjectType },
	{ "PolitEcon", ENUM_PolitEcon },
	{ "PolitGovType", ENUM_PolitGovType },
	{ "ShipTypeThruster", ENUM_ShipTypeThruster },
	{ "PropulsionFuelStatus", ENUM_PropulsionFuelStatus },
	{ "ShipFlightState", ENUM_ShipFlightState },
	{ "ShipJumpStatus", ENUM_ShipJumpStatus },
	{ "ShipAlertStatus", ENUM_ShipAlertStatus },
	{ "ShipAICmdName", ENUM_ShipAICmdName },
	{ "ShipControllerFlightControlState", ENUM_ShipControllerFlightControlState },
	{ "DualLaserOrientation", ENUM_DualLaserOrientation },
	{ "ShipTypeTag", ENUM_ShipTypeTag },
	{ "EconType", ENUM_EconType },
	{ "CommodityType", ENUM_CommodityType },
	{ "BodyType", ENUM_BodyType },
	{ "BodySuperType", ENUM_BodySuperType },
	{ "GameUIFaceFlags", ENUM_GameUIFaceFlags },
	{ "GameUIMarkerStyle", ENUM_GameUIMarkerStyle },
	{ "ModelDebugFlags", ENUM_ModelDebugFlags },
	{ "UIAlignDirection", ENUM_UIAlignDirection },
	{ "UIAnimationType", ENUM_UIAnimationType },
	{ "UIAnimationEasing", ENUM_UIAnimationEasing },
	{ "UIAnimationTarget", ENUM_UIAnimationTarget },
	{ "UIEventType", ENUM_UIEventType },
	{ "UIKeyboardAction", ENUM_UIKeyboardAction },
	{ "UIMouseButtonAction", ENUM_UIMouseButtonAction },
	{ "UIMouseButtonType", ENUM_UIMouseButtonType },
	{ "UIMouseWheelDirection", ENUM_UIMouseWheelDirection },
	{ "UIJoystickHatDirection", ENUM_UIJoystickHatDirection },
	{ "UIJoystickButtonAction", ENUM_UIJoystickButtonAction },
	{ "UIExpandDirection", ENUM_UIExpandDirection },
	{ "UIGradientDirection", ENUM_UIGradientDirection },
	{ "UIMarginDirection", ENUM_UIMarginDirection },
	{ "UINumberLabelFormat", ENUM_UINumberLabelFormat },
	{ "UITableRowAlignDirection", ENUM_UITableRowAlignDirection },
	{ "UITableColumnAlignDirection", ENUM_UITableColumnAlignDirection },
	{ "UISizeControl", ENUM_UISizeControl },
	{ "UIFont", ENUM_UIFont },
	{ 0, 0 },
};

const struct EnumTable ENUM_TABLES_PUBLIC[] = {
	{ "ShipAIError", ENUM_ShipAIError },
	{ "DetailLevel", ENUM_DetailLevel },
	{ "FileSystemRoot", ENUM_FileSystemRoot },
	{ "PhysicsObjectType", ENUM_PhysicsObjectType },
	{ "PolitEcon", ENUM_PolitEcon },
	{ "PolitGovType", ENUM_PolitGovType },
	{ "ShipTypeThruster", ENUM_ShipTypeThruster },
	{ "PropulsionFuelStatus", ENUM_PropulsionFuelStatus },
	{ "ShipFlightState", ENUM_ShipFlightState },
	{ "ShipJumpStatus", ENUM_ShipJumpStatus },
	{ "ShipAlertStatus", ENUM_ShipAlertStatus },
	{ "ShipAICmdName", ENUM_ShipAICmdName },
	{ "ShipControllerFlightControlState", ENUM_ShipControllerFlightControlState },
	{ "DualLaserOrientation", ENUM_DualLaserOrientation },
	{ "ShipTypeTag", ENUM_ShipTypeTag },
	{ "EconType", ENUM_EconType },
	{ "CommodityType", ENUM_CommodityType },
	{ "BodyType", ENUM_BodyType },
	{ "BodySuperType", ENUM_BodySuperType },
	{ "GameUIFaceFlags", ENUM_GameUIFaceFlags },
	{ "GameUIMarkerStyle", ENUM_GameUIMarkerStyle },
	{ "ModelDebugFlags", ENUM_ModelDebugFlags },
	{ "UIAlignDirection", ENUM_UIAlignDirection },
	{ "UIAnimationType", ENUM_UIAnimationType },
	{ "UIAnimationEasing", ENUM_UIAnimationEasing },
	{ "UIAnimationTarget", ENUM_UIAnimationTarget },
	{ "UIEventType", ENUM_UIEventType },
	{ "UIKeyboardAction", ENUM_UIKeyboardAction },
	{ "UIMouseButtonAction", ENUM_UIMouseButtonAction },
	{ "UIMouseButtonType", ENUM_UIMouseButtonType },
	{ "UIMouseWheelDirection", ENUM_UIMouseWheelDirection },
	{ "UIJoystickHatDirection", ENUM_UIJoystickHatDirection },
	{ "UIJoystickButtonAction", ENUM_UIJoystickButtonAction },
	{ "UIExpandDirection", ENUM_UIExpandDirection },
	{ "UIGradientDirection", ENUM_UIGradientDirection },
	{ "UIMarginDirection", ENUM_UIMarginDirection },
	{ "UITableRowAlignDirection", ENUM_UITableRowAlignDirection },
	{ "UITableColumnAlignDirection", ENUM_UITableColumnAlignDirection },
	{ "UISizeControl", ENUM_UISizeControl },
	{ "UIFont", ENUM_UIFont },
	{ 0, 0 },
};
