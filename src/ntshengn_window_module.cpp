#include "ntshengn_window_module.h"
#include "../Module/utils/ntshengn_module_defines.h"
#include "../Module/utils/ntshengn_dynamic_library.h"
#include "../Common/utils/ntshengn_defines.h"
#include "../Common/utils/ntshengn_enums.h"
#include "../Common/resources/ntshengn_resources_graphics.h"
#include <limits>

void NtshEngn::WindowModule::init() {
	NTSHENGN_MODULE_FUNCTION_NOT_IMPLEMENTED();
}

void NtshEngn::WindowModule::update(double dt) {
	NTSHENGN_UNUSED(dt);
	NTSHENGN_MODULE_FUNCTION_NOT_IMPLEMENTED();
}

void NtshEngn::WindowModule::destroy() {
	NTSHENGN_MODULE_FUNCTION_NOT_IMPLEMENTED();
}

NtshEngn::WindowID NtshEngn::WindowModule::open(int width, int height, const std::string& title) {
	NTSHENGN_UNUSED(width);
	NTSHENGN_UNUSED(height);
	NTSHENGN_UNUSED(title);
	NTSHENGN_MODULE_FUNCTION_NOT_IMPLEMENTED();

	return std::numeric_limits<WindowID>::max();
}

bool NtshEngn::WindowModule::isOpen(WindowID windowID) {
	NTSHENGN_UNUSED(windowID);
	NTSHENGN_MODULE_FUNCTION_NOT_IMPLEMENTED();

	return false;
}

void NtshEngn::WindowModule::close(WindowID windowID) {
	NTSHENGN_UNUSED(windowID);
	NTSHENGN_MODULE_FUNCTION_NOT_IMPLEMENTED();
}

NtshEngn::WindowID NtshEngn::WindowModule::getMainWindowID() {
	NTSHENGN_MODULE_FUNCTION_NOT_IMPLEMENTED();

	return std::numeric_limits<WindowID>::max();
}

uint64_t NtshEngn::WindowModule::windowCount() {
	NTSHENGN_MODULE_FUNCTION_NOT_IMPLEMENTED();

	return 0;
}

void NtshEngn::WindowModule::setSize(WindowID windowID, int width, int height) {
	NTSHENGN_UNUSED(windowID);
	NTSHENGN_UNUSED(width);
	NTSHENGN_UNUSED(height);
	NTSHENGN_MODULE_FUNCTION_NOT_IMPLEMENTED();
}

int NtshEngn::WindowModule::getWidth(WindowID windowID) {
	NTSHENGN_UNUSED(windowID);
	NTSHENGN_MODULE_FUNCTION_NOT_IMPLEMENTED();

	return 0;
}

int NtshEngn::WindowModule::getHeight(WindowID windowID) {
	NTSHENGN_UNUSED(windowID);
	NTSHENGN_MODULE_FUNCTION_NOT_IMPLEMENTED();

	return 0;
}

void NtshEngn::WindowModule::setPosition(WindowID windowID, int x, int y) {
	NTSHENGN_UNUSED(windowID);
	NTSHENGN_UNUSED(x);
	NTSHENGN_UNUSED(y);
	NTSHENGN_MODULE_FUNCTION_NOT_IMPLEMENTED();
}

int NtshEngn::WindowModule::getPositionX(WindowID windowID) {
	NTSHENGN_UNUSED(windowID);
	NTSHENGN_MODULE_FUNCTION_NOT_IMPLEMENTED();

	return -1;
}

int NtshEngn::WindowModule::getPositionY(WindowID windowID) {
	NTSHENGN_UNUSED(windowID);
	NTSHENGN_MODULE_FUNCTION_NOT_IMPLEMENTED();

	return -1;
}

void NtshEngn::WindowModule::setFullscreen(WindowID windowID, bool fullscreen) {
	NTSHENGN_UNUSED(windowID);
	NTSHENGN_UNUSED(fullscreen);
	NTSHENGN_MODULE_FUNCTION_NOT_IMPLEMENTED();
}

bool NtshEngn::WindowModule::isFullscreen(WindowID windowID) {
	NTSHENGN_UNUSED(windowID);
	NTSHENGN_MODULE_FUNCTION_NOT_IMPLEMENTED();

	return false;
}

void NtshEngn::WindowModule::setBorderless(WindowID windowID, bool borderless) {
	NTSHENGN_UNUSED(windowID);
	NTSHENGN_UNUSED(borderless);
	NTSHENGN_MODULE_FUNCTION_NOT_IMPLEMENTED();
}

bool NtshEngn::WindowModule::isBorderless(WindowID windowID) {
	NTSHENGN_UNUSED(windowID);
	NTSHENGN_MODULE_FUNCTION_NOT_IMPLEMENTED();

	return false;
}

void NtshEngn::WindowModule::setResizable(WindowID windowID, bool resizable) {
	NTSHENGN_UNUSED(windowID);
	NTSHENGN_UNUSED(resizable);
	NTSHENGN_MODULE_FUNCTION_NOT_IMPLEMENTED();
}

bool NtshEngn::WindowModule::isResizable(WindowID windowID) {
	NTSHENGN_UNUSED(windowID);
	NTSHENGN_MODULE_FUNCTION_NOT_IMPLEMENTED();

	return false;
}

void NtshEngn::WindowModule::pollEvents() {
	NTSHENGN_MODULE_FUNCTION_NOT_IMPLEMENTED();
}

void NtshEngn::WindowModule::setTitle(WindowID windowID, const std::string& title) {
	NTSHENGN_UNUSED(windowID);
	NTSHENGN_UNUSED(title);
	NTSHENGN_MODULE_FUNCTION_NOT_IMPLEMENTED();
}

void NtshEngn::WindowModule::setIcon(WindowID windowID, const Image& image) {
	NTSHENGN_UNUSED(windowID);
	NTSHENGN_UNUSED(image);
	NTSHENGN_MODULE_FUNCTION_NOT_IMPLEMENTED();
}

NtshEngn::InputState NtshEngn::WindowModule::getKeyState(WindowID windowID, InputKeyboardKey key) {
	NTSHENGN_UNUSED(windowID);
	NTSHENGN_UNUSED(key);
	NTSHENGN_MODULE_FUNCTION_NOT_IMPLEMENTED();

	return InputState::None;
}

NtshEngn::InputState NtshEngn::WindowModule::getMouseButtonState(WindowID windowID, InputMouseButton mouseButton) {
	NTSHENGN_UNUSED(windowID);
	NTSHENGN_UNUSED(mouseButton);
	NTSHENGN_MODULE_FUNCTION_NOT_IMPLEMENTED();

	return InputState::None;
}

void NtshEngn::WindowModule::setCursorPosition(WindowID windowID, int x, int y) {
	NTSHENGN_UNUSED(windowID);
	NTSHENGN_UNUSED(x);
	NTSHENGN_UNUSED(y);
	NTSHENGN_MODULE_FUNCTION_NOT_IMPLEMENTED();
}

int NtshEngn::WindowModule::getCursorPositionX(WindowID windowID) {
	NTSHENGN_UNUSED(windowID);
	NTSHENGN_MODULE_FUNCTION_NOT_IMPLEMENTED();

	return -1;
}

int NtshEngn::WindowModule::getCursorPositionY(WindowID windowID) {
	NTSHENGN_UNUSED(windowID);
	NTSHENGN_MODULE_FUNCTION_NOT_IMPLEMENTED();

	return -1;
}

int NtshEngn::WindowModule::getMonitorWidth() {
	NTSHENGN_MODULE_FUNCTION_NOT_IMPLEMENTED();

	return 0;
}

int NtshEngn::WindowModule::getMonitorHeight() {
	NTSHENGN_MODULE_FUNCTION_NOT_IMPLEMENTED();

	return 0;
}

int NtshEngn::WindowModule::getMonitorRefreshRate() {
	NTSHENGN_MODULE_FUNCTION_NOT_IMPLEMENTED();

	return 0;
}

float NtshEngn::WindowModule::getMonitorDisplayScaling() {
	NTSHENGN_MODULE_FUNCTION_NOT_IMPLEMENTED();

	return 0.0f;
}

void NtshEngn::WindowModule::setCursorVisibility(WindowID windowID, bool visible) {
	NTSHENGN_UNUSED(windowID);
	NTSHENGN_UNUSED(visible);
	NTSHENGN_MODULE_FUNCTION_NOT_IMPLEMENTED();
}

bool NtshEngn::WindowModule::isCursorVisible(WindowID windowID) {
	NTSHENGN_UNUSED(windowID);
	NTSHENGN_MODULE_FUNCTION_NOT_IMPLEMENTED();

	return false;
}

std::vector<NtshEngn::GamepadID> NtshEngn::WindowModule::getConnectedGamepads() {
	NTSHENGN_MODULE_FUNCTION_NOT_IMPLEMENTED();

	return std::vector<GamepadID>();
}

NtshEngn::InputState NtshEngn::WindowModule::getGamepadButtonState(GamepadID gamepadID, InputGamepadButton button) {
	NTSHENGN_UNUSED(gamepadID);
	NTSHENGN_UNUSED(button);
	NTSHENGN_MODULE_FUNCTION_NOT_IMPLEMENTED();

	return InputState::None;
}

float NtshEngn::WindowModule::getGamepadStickAxisX(GamepadID gamepadID, InputGamepadStick stick) {
	NTSHENGN_UNUSED(gamepadID);
	NTSHENGN_UNUSED(stick);
	NTSHENGN_MODULE_FUNCTION_NOT_IMPLEMENTED();

	return 0.0f;
}

float NtshEngn::WindowModule::getGamepadStickAxisY(GamepadID gamepadID, InputGamepadStick stick) {
	NTSHENGN_UNUSED(gamepadID);
	NTSHENGN_UNUSED(stick);
	NTSHENGN_MODULE_FUNCTION_NOT_IMPLEMENTED();

	return 0.0f;
}

float NtshEngn::WindowModule::getGamepadLeftTrigger(GamepadID gamepadID) {
	NTSHENGN_UNUSED(gamepadID);
	NTSHENGN_MODULE_FUNCTION_NOT_IMPLEMENTED();

	return 0.0f;
}

float NtshEngn::WindowModule::getGamepadRightTrigger(GamepadID gamepadID) {
	NTSHENGN_UNUSED(gamepadID);
	NTSHENGN_MODULE_FUNCTION_NOT_IMPLEMENTED();

	return 0.0f;
}

float NtshEngn::WindowModule::getMouseScrollOffsetX(WindowID windowID) {
	NTSHENGN_UNUSED(windowID);
	NTSHENGN_MODULE_FUNCTION_NOT_IMPLEMENTED();

	return 0.0f;
}

float NtshEngn::WindowModule::getMouseScrollOffsetY(WindowID windowID) {
	NTSHENGN_UNUSED(windowID);
	NTSHENGN_MODULE_FUNCTION_NOT_IMPLEMENTED();

	return 0.0f;
}

NtshEngn::NativeWindowHandle NtshEngn::WindowModule::getNativeHandle(WindowID windowID) {
	NTSHENGN_UNUSED(windowID);
	NTSHENGN_MODULE_FUNCTION_NOT_IMPLEMENTED();

	return nullptr;
}

NtshEngn::NativeWindowAdditionalInformation NtshEngn::WindowModule::getNativeAdditionalInformation(WindowID windowID) {
	NTSHENGN_UNUSED(windowID);
	NTSHENGN_MODULE_FUNCTION_NOT_IMPLEMENTED();

	return nullptr;
}

extern "C" NTSHENGN_MODULE_API NtshEngn::WindowModuleInterface* createModule() {
	return new NtshEngn::WindowModule;
}

extern "C" NTSHENGN_MODULE_API void destroyModule(NtshEngn::WindowModuleInterface* m) {
	delete m;
}