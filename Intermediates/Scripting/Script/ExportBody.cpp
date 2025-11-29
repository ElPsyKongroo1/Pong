#include "ExportHeader.h"
namespace Kargono
{
static std::function<void()> Application_ClosePtr {};
void Application_Close()
{
	Application_ClosePtr();
}
static std::function<void(uint16_t a)> Application_ResizePtr {};
void Application_Resize(uint16_t a)
{
	Application_ResizePtr(a);
}
static std::function<void(uint64_t a)> AI_RevertPreviousStatePtr {};
void AI_RevertPreviousState(uint64_t a)
{
	AI_RevertPreviousStatePtr(a);
}
static std::function<void(uint64_t a)> AI_ClearGlobalStatePtr {};
void AI_ClearGlobalState(uint64_t a)
{
	AI_ClearGlobalStatePtr(a);
}
static std::function<void(uint64_t a)> AI_ClearCurrentStatePtr {};
void AI_ClearCurrentState(uint64_t a)
{
	AI_ClearCurrentStatePtr(a);
}
static std::function<void(uint64_t a)> AI_ClearPreviousStatePtr {};
void AI_ClearPreviousState(uint64_t a)
{
	AI_ClearPreviousStatePtr(a);
}
static std::function<void(uint64_t a)> AI_ClearAllStatesPtr {};
void AI_ClearAllStates(uint64_t a)
{
	AI_ClearAllStatesPtr(a);
}
static std::function<void(uint64_t a, uint64_t b)> AI_ChangeGlobalStatePtr {};
void AI_ChangeGlobalState(uint64_t a, uint64_t b)
{
	AI_ChangeGlobalStatePtr(a, b);
}
static std::function<void(uint64_t a, uint64_t b)> AI_ChangeCurrentStatePtr {};
void AI_ChangeCurrentState(uint64_t a, uint64_t b)
{
	AI_ChangeCurrentStatePtr(a, b);
}
static std::function<bool(uint64_t a, uint64_t b)> AI_IsGlobalStatePtr {};
bool AI_IsGlobalState(uint64_t a, uint64_t b)
{
	return AI_IsGlobalStatePtr(a, b);
}
static std::function<bool(uint64_t a, uint64_t b)> AI_IsCurrentStatePtr {};
bool AI_IsCurrentState(uint64_t a, uint64_t b)
{
	return AI_IsCurrentStatePtr(a, b);
}
static std::function<bool(uint64_t a, uint64_t b)> AI_IsPreviousStatePtr {};
bool AI_IsPreviousState(uint64_t a, uint64_t b)
{
	return AI_IsPreviousStatePtr(a, b);
}
static std::function<void(uint32_t a, uint64_t b, uint64_t c,  float d)> AI_SendMessagePtr {};
void AI_SendMessage(uint32_t a, uint64_t b, uint64_t c, float d)
{
	AI_SendMessagePtr(a, b, c, d);
}
static std::function<void(uint64_t a)> PlaySoundFromHandlePtr {};
void PlaySoundFromHandle(uint64_t a)
{
	PlaySoundFromHandlePtr(a);
}
static std::function<void(uint64_t a)> PlayStereoSoundFromHandlePtr {};
void PlayStereoSoundFromHandle(uint64_t a)
{
	PlayStereoSoundFromHandlePtr(a);
}
static std::function<void()> ClearDebugLinesPtr {};
void ClearDebugLines()
{
	ClearDebugLinesPtr();
}
static std::function<void()> ClearDebugPointsPtr {};
void ClearDebugPoints()
{
	ClearDebugPointsPtr();
}
static std::function<void(Math::vec3 a)> AddDebugPointPtr {};
void AddDebugPoint(Math::vec3 a)
{
	AddDebugPointPtr(a);
}
static std::function<void(Math::vec3 a, Math::vec3 b)> AddDebugLinePtr {};
void AddDebugLine(Math::vec3 a, Math::vec3 b)
{
	AddDebugLinePtr(a, b);
}
static std::function<void(std::string_view a, std::string_view b, std::string_view c)> LogPtr {};
void Log(std::string_view a, std::string_view b, std::string_view c)
{
	LogPtr(a, b, c);
}
static std::function<void*(std::string_view a)> GetGameStateFieldPtr {};
void* GetGameStateField(std::string_view a)
{
	return GetGameStateFieldPtr(a);
}
static std::function<void(std::string_view a, void* b)> SetGameStateFieldPtr {};
void SetGameStateField(std::string_view a, void* b)
{
	SetGameStateFieldPtr(a, b);
}
static std::function<bool(uint16_t a)> Input_IsKeyPressedPtr {};
bool Input_IsKeyPressed(uint16_t a)
{
	return Input_IsKeyPressedPtr(a);
}
static std::function<void(uint64_t a)> InputMap_LoadInputMapFromHandlePtr {};
void InputMap_LoadInputMapFromHandle(uint64_t a)
{
	InputMap_LoadInputMapFromHandlePtr(a);
}
static std::function<bool(uint16_t a)> InputMap_IsPollingSlotPressedPtr {};
bool InputMap_IsPollingSlotPressed(uint16_t a)
{
	return InputMap_IsPollingSlotPressedPtr(a);
}
static std::function<void()> EnableReadyCheckPtr {};
void EnableReadyCheck()
{
	EnableReadyCheckPtr();
}
static std::function<void()> RequestUserCountPtr {};
void RequestUserCount()
{
	RequestUserCountPtr();
}
static std::function<void()> RequestJoinSessionPtr {};
void RequestJoinSession()
{
	RequestJoinSessionPtr();
}
static std::function<void()> LeaveCurrentSessionPtr {};
void LeaveCurrentSession()
{
	LeaveCurrentSessionPtr();
}
static std::function<uint16_t()> GetActiveSessionSlotPtr {};
uint16_t GetActiveSessionSlot()
{
	return GetActiveSessionSlotPtr();
}
static std::function<void(uint16_t a)> SignalAllPtr {};
void SignalAll(uint16_t a)
{
	SignalAllPtr(a);
}
static std::function<void(uint64_t a, Math::vec3 b, Math::vec2 c)> SendAllEntityPhysicsPtr {};
void SendAllEntityPhysics(uint64_t a, Math::vec3 b, Math::vec2 c)
{
	SendAllEntityPhysicsPtr(a, b, c);
}
static std::function<void(uint64_t a, Math::vec3 b)> Particles_AddEmitterByHandlePtr {};
void Particles_AddEmitterByHandle(uint64_t a, Math::vec3 b)
{
	Particles_AddEmitterByHandlePtr(a, b);
}
static std::function<Physics::RaycastResult(Math::vec2 a, Math::vec2 b)> Physics_RaycastPtr {};
Physics::RaycastResult Physics_Raycast(Math::vec2 a, Math::vec2 b)
{
	return Physics_RaycastPtr(a, b);
}
static std::function<int32_t(int32_t a, int32_t b)> GenerateRandomIntegerPtr {};
int32_t GenerateRandomInteger(int32_t a, int32_t b)
{
	return GenerateRandomIntegerPtr(a, b);
}
static std::function<float(float a, float b)> GenerateRandomFloatPtr {};
float GenerateRandomFloat(float a, float b)
{
	return GenerateRandomFloatPtr(a, b);
}
static std::function<bool(uint64_t a)> Scenes_IsSceneActivePtr {};
bool Scenes_IsSceneActive(uint64_t a)
{
	return Scenes_IsSceneActivePtr(a);
}
static std::function<void(uint64_t a)> TransitionSceneFromHandlePtr {};
void TransitionSceneFromHandle(uint64_t a)
{
	TransitionSceneFromHandlePtr(a);
}
static std::function<std::string_view(uint64_t a)> TagComponent_GetTagPtr {};
std::string_view TagComponent_GetTag(uint64_t a)
{
	return TagComponent_GetTagPtr(a);
}
static std::function<Math::vec3(uint64_t a)> TransformComponent_GetTranslationPtr {};
Math::vec3 TransformComponent_GetTranslation(uint64_t a)
{
	return TransformComponent_GetTranslationPtr(a);
}
static std::function<Math::vec2(uint64_t a)> RigidBody2D_GetLinearVelocityPtr {};
Math::vec2 RigidBody2D_GetLinearVelocity(uint64_t a)
{
	return RigidBody2D_GetLinearVelocityPtr(a);
}
static std::function<uint64_t(std::string_view a)> FindEntityHandleByNamePtr {};
uint64_t FindEntityHandleByName(std::string_view a)
{
	return FindEntityHandleByNamePtr(a);
}
static std::function<bool(uint64_t a, std::string_view b)> CheckHasComponentPtr {};
bool CheckHasComponent(uint64_t a, std::string_view b)
{
	return CheckHasComponentPtr(a, b);
}
static std::function<void(uint64_t a, Math::vec3 b)> SendAllEntityLocationPtr {};
void SendAllEntityLocation(uint64_t a, Math::vec3 b)
{
	SendAllEntityLocationPtr(a, b);
}
static std::function<void(uint64_t a, Math::vec2 b)> RigidBody2D_SetLinearVelocityPtr {};
void RigidBody2D_SetLinearVelocity(uint64_t a, Math::vec2 b)
{
	RigidBody2D_SetLinearVelocityPtr(a, b);
}
static std::function<void(uint64_t a, Math::vec3 b)> TransformComponent_SetTranslationPtr {};
void TransformComponent_SetTranslation(uint64_t a, Math::vec3 b)
{
	TransformComponent_SetTranslationPtr(a, b);
}
static std::function<void*(uint64_t a, uint64_t b, uint64_t c)> Scenes_GetCustomComponentFieldPtr {};
void* Scenes_GetCustomComponentField(uint64_t a, uint64_t b, uint64_t c)
{
	return Scenes_GetCustomComponentFieldPtr(a, b, c);
}
static std::function<void(uint64_t a, uint64_t b, uint64_t c,  void* d)> Scenes_SetCustomComponentFieldPtr {};
void Scenes_SetCustomComponentField(uint64_t a, uint64_t b, uint64_t c, void* d)
{
	Scenes_SetCustomComponentFieldPtr(a, b, c, d);
}
static std::function<void()> RuntimeUI_ClearSelectedWidgetPtr {};
void RuntimeUI_ClearSelectedWidget()
{
	RuntimeUI_ClearSelectedWidgetPtr();
}
static std::function<bool(uint64_t a)> RuntimeUI_IsUserInterfaceActiveFromHandlePtr {};
bool RuntimeUI_IsUserInterfaceActiveFromHandle(uint64_t a)
{
	return RuntimeUI_IsUserInterfaceActiveFromHandlePtr(a);
}
static std::function<void(uint64_t a)> RuntimeUI_LoadUserInterfaceFromHandlePtr {};
void RuntimeUI_LoadUserInterfaceFromHandle(uint64_t a)
{
	RuntimeUI_LoadUserInterfaceFromHandlePtr(a);
}
static std::function<std::string_view(RuntimeUI::WidgetHandle a)> RuntimeUI_GetWidgetTextPtr {};
std::string_view RuntimeUI_GetWidgetText(RuntimeUI::WidgetHandle a)
{
	return RuntimeUI_GetWidgetTextPtr(a);
}
static std::function<void(RuntimeUI::WidgetHandle a)> RuntimeUI_SetSelectedWidgetPtr {};
void RuntimeUI_SetSelectedWidget(RuntimeUI::WidgetHandle a)
{
	RuntimeUI_SetSelectedWidgetPtr(a);
}
static std::function<bool(RuntimeUI::WidgetHandle a)> RuntimeUI_IsWidgetSelectedPtr {};
bool RuntimeUI_IsWidgetSelected(RuntimeUI::WidgetHandle a)
{
	return RuntimeUI_IsWidgetSelectedPtr(a);
}
static std::function<void(RuntimeUI::WindowHandle a, bool b)> RuntimeUI_SetDisplayWindowPtr {};
void RuntimeUI_SetDisplayWindow(RuntimeUI::WindowHandle a, bool b)
{
	RuntimeUI_SetDisplayWindowPtr(a, b);
}
static std::function<void(RuntimeUI::WidgetHandle a, bool b)> RuntimeUI_SetWidgetSelectablePtr {};
void RuntimeUI_SetWidgetSelectable(RuntimeUI::WidgetHandle a, bool b)
{
	RuntimeUI_SetWidgetSelectablePtr(a, b);
}
static std::function<void(RuntimeUI::WidgetHandle a, std::string_view b)> RuntimeUI_SetWidgetTextPtr {};
void RuntimeUI_SetWidgetText(RuntimeUI::WidgetHandle a, std::string_view b)
{
	RuntimeUI_SetWidgetTextPtr(a, b);
}
static std::function<void(RuntimeUI::WidgetHandle a, Math::vec4 b)> RuntimeUI_SetWidgetBackgroundColorPtr {};
void RuntimeUI_SetWidgetBackgroundColor(RuntimeUI::WidgetHandle a, Math::vec4 b)
{
	RuntimeUI_SetWidgetBackgroundColorPtr(a, b);
}
static std::function<void(RuntimeUI::WidgetHandle a, Math::vec4 b)> RuntimeUI_SetWidgetTextColorPtr {};
void RuntimeUI_SetWidgetTextColor(RuntimeUI::WidgetHandle a, Math::vec4 b)
{
	RuntimeUI_SetWidgetTextColorPtr(a, b);
}
static std::function<void(RuntimeUI::WidgetHandle a, uint64_t b)> RuntimeUI_SetWidgetImagePtr {};
void RuntimeUI_SetWidgetImage(RuntimeUI::WidgetHandle a, uint64_t b)
{
	RuntimeUI_SetWidgetImagePtr(a, b);
}
void AddVoidNone(std::string_view funcName, std::function<void()> funcPtr)
{
if (funcName == "EnableReadyCheck") { EnableReadyCheckPtr = funcPtr; return; }
if (funcName == "RequestUserCount") { RequestUserCountPtr = funcPtr; return; }
if (funcName == "RequestJoinSession") { RequestJoinSessionPtr = funcPtr; return; }
if (funcName == "LeaveCurrentSession") { LeaveCurrentSessionPtr = funcPtr; return; }
if (funcName == "ClearDebugLines") { ClearDebugLinesPtr = funcPtr; return; }
if (funcName == "ClearDebugPoints") { ClearDebugPointsPtr = funcPtr; return; }
if (funcName == "Application_Close") { Application_ClosePtr = funcPtr; return; }
if (funcName == "RuntimeUI_ClearSelectedWidget") { RuntimeUI_ClearSelectedWidgetPtr = funcPtr; return; }
}
void AddVoidUInt16(std::string_view funcName, std::function<void(uint16_t)> funcPtr)
{
if (funcName == "SignalAll") { SignalAllPtr = funcPtr; return; }
if (funcName == "Application_Resize") { Application_ResizePtr = funcPtr; return; }
}
void AddVoidVec3(std::string_view funcName, std::function<void(Math::vec3)> funcPtr)
{
if (funcName == "AddDebugPoint") { AddDebugPointPtr = funcPtr; return; }
}
void AddVoidVec3Float(std::string_view funcName, std::function<void(Math::vec3, float)> funcPtr)
{
}
void AddVoidVec3Vec3(std::string_view funcName, std::function<void(Math::vec3, Math::vec3)> funcPtr)
{
if (funcName == "AddDebugLine") { AddDebugLinePtr = funcPtr; return; }
}
void AddVoidString(std::string_view funcName, std::function<void(std::string_view)> funcPtr)
{
}
void AddVoidUInt64(std::string_view funcName, std::function<void(uint64_t)> funcPtr)
{
if (funcName == "AI_RevertPreviousState") { AI_RevertPreviousStatePtr = funcPtr; return; }
if (funcName == "AI_ClearGlobalState") { AI_ClearGlobalStatePtr = funcPtr; return; }
if (funcName == "AI_ClearCurrentState") { AI_ClearCurrentStatePtr = funcPtr; return; }
if (funcName == "AI_ClearPreviousState") { AI_ClearPreviousStatePtr = funcPtr; return; }
if (funcName == "AI_ClearAllStates") { AI_ClearAllStatesPtr = funcPtr; return; }
if (funcName == "TransitionSceneFromHandle") { TransitionSceneFromHandlePtr = funcPtr; return; }
if (funcName == "RuntimeUI_LoadUserInterfaceFromHandle") { RuntimeUI_LoadUserInterfaceFromHandlePtr = funcPtr; return; }
if (funcName == "PlaySoundFromHandle") { PlaySoundFromHandlePtr = funcPtr; return; }
if (funcName == "PlayStereoSoundFromHandle") { PlayStereoSoundFromHandlePtr = funcPtr; return; }
if (funcName == "InputMap_LoadInputMapFromHandle") { InputMap_LoadInputMapFromHandlePtr = funcPtr; return; }
}
void AddVoidUInt64UInt64(std::string_view funcName, std::function<void(uint64_t, uint64_t)> funcPtr)
{
if (funcName == "AI_ChangeGlobalState") { AI_ChangeGlobalStatePtr = funcPtr; return; }
if (funcName == "AI_ChangeCurrentState") { AI_ChangeCurrentStatePtr = funcPtr; return; }
}
void AddVoidStringBool(std::string_view funcName, std::function<void(std::string_view, bool)> funcPtr)
{
}
void AddVoidUInt16Bool(std::string_view funcName, std::function<void(uint16_t, bool)> funcPtr)
{
}
void AddVoidUIWindowBool(std::string_view funcName, std::function<void(RuntimeUI::WindowHandle, bool)> funcPtr)
{
if (funcName == "RuntimeUI_SetDisplayWindow") { RuntimeUI_SetDisplayWindowPtr = funcPtr; return; }
}
void AddVoidUInt16UInt16(std::string_view funcName, std::function<void(uint16_t, uint16_t)> funcPtr)
{
}
void AddVoidUIWidget(std::string_view funcName, std::function<void(RuntimeUI::WidgetHandle)> funcPtr)
{
if (funcName == "RuntimeUI_SetSelectedWidget") { RuntimeUI_SetSelectedWidgetPtr = funcPtr; return; }
}
void AddVoidUInt16UInt16Bool(std::string_view funcName, std::function<void(uint16_t, uint16_t, bool)> funcPtr)
{
}
void AddVoidUIWidgetBool(std::string_view funcName, std::function<void(RuntimeUI::WidgetHandle, bool)> funcPtr)
{
if (funcName == "RuntimeUI_SetWidgetSelectable") { RuntimeUI_SetWidgetSelectablePtr = funcPtr; return; }
}
void AddVoidStringVoidPtr(std::string_view funcName, std::function<void(std::string_view, void*)> funcPtr)
{
if (funcName == "SetGameStateField") { SetGameStateFieldPtr = funcPtr; return; }
}
void AddVoidStringString(std::string_view funcName, std::function<void(std::string_view, std::string_view)> funcPtr)
{
}
void AddVoidStringStringBool(std::string_view funcName, std::function<void(std::string_view, std::string_view, bool)> funcPtr)
{
}
void AddVoidStringStringString(std::string_view funcName, std::function<void(std::string_view, std::string_view, std::string_view)> funcPtr)
{
if (funcName == "Log") { LogPtr = funcPtr; return; }
}
void AddVoidUInt16UInt16String(std::string_view funcName, std::function<void(uint16_t, uint16_t, std::string_view)> funcPtr)
{
}
void AddVoidUIWidgetString(std::string_view funcName, std::function<void(RuntimeUI::WidgetHandle, std::string_view)> funcPtr)
{
if (funcName == "RuntimeUI_SetWidgetText") { RuntimeUI_SetWidgetTextPtr = funcPtr; return; }
}
void AddVoidUIWidgetUInt64(std::string_view funcName, std::function<void(RuntimeUI::WidgetHandle, uint64_t)> funcPtr)
{
if (funcName == "RuntimeUI_SetWidgetImage") { RuntimeUI_SetWidgetImagePtr = funcPtr; return; }
}
void AddVoidStringStringVec4(std::string_view funcName, std::function<void(std::string_view, std::string_view, Math::vec4)> funcPtr)
{
}
void AddVoidUInt64Vec3(std::string_view funcName, std::function<void(uint64_t, Math::vec3)> funcPtr)
{
if (funcName == "SendAllEntityLocation") { SendAllEntityLocationPtr = funcPtr; return; }
if (funcName == "TransformComponent_SetTranslation") { TransformComponent_SetTranslationPtr = funcPtr; return; }
if (funcName == "Particles_AddEmitterByHandle") { Particles_AddEmitterByHandlePtr = funcPtr; return; }
}
void AddVoidUInt64Vec2(std::string_view funcName, std::function<void(uint64_t, Math::vec2)> funcPtr)
{
if (funcName == "RigidBody2D_SetLinearVelocity") { RigidBody2D_SetLinearVelocityPtr = funcPtr; return; }
}
void AddBoolUInt64String(std::string_view funcName, std::function<bool(uint64_t, std::string_view)> funcPtr)
{
if (funcName == "CheckHasComponent") { CheckHasComponentPtr = funcPtr; return; }
}
void AddBoolStringString(std::string_view funcName, std::function<bool(std::string_view, std::string_view)> funcPtr)
{
}
void AddUInt16None(std::string_view funcName, std::function<uint16_t()> funcPtr)
{
if (funcName == "GetActiveSessionSlot") { GetActiveSessionSlotPtr = funcPtr; return; }
}
void AddVec3UInt64(std::string_view funcName, std::function<Math::vec3(uint64_t)> funcPtr)
{
if (funcName == "TransformComponent_GetTranslation") { TransformComponent_GetTranslationPtr = funcPtr; return; }
}
void AddVec2UInt64(std::string_view funcName, std::function<Math::vec2(uint64_t)> funcPtr)
{
if (funcName == "RigidBody2D_GetLinearVelocity") { RigidBody2D_GetLinearVelocityPtr = funcPtr; return; }
}
void AddUInt64String(std::string_view funcName, std::function<uint64_t(std::string_view)> funcPtr)
{
if (funcName == "FindEntityHandleByName") { FindEntityHandleByNamePtr = funcPtr; return; }
}
void AddVoidUInt64StringVoidPtr(std::string_view funcName, std::function<void(uint64_t, std::string_view, void*)> funcPtr)
{
}
void AddVoidUInt64Vec3Vec2(std::string_view funcName, std::function<void(uint64_t, Math::vec3, Math::vec2)> funcPtr)
{
if (funcName == "SendAllEntityPhysics") { SendAllEntityPhysicsPtr = funcPtr; return; }
}
void AddVoidUInt16UInt16Vec4(std::string_view funcName, std::function<void(uint16_t, uint16_t, Math::vec4)> funcPtr)
{
}
void AddVoidUIWidgetVec4(std::string_view funcName, std::function<void(RuntimeUI::WidgetHandle, Math::vec4)> funcPtr)
{
if (funcName == "RuntimeUI_SetWidgetTextColor") { RuntimeUI_SetWidgetTextColorPtr = funcPtr; return; }
if (funcName == "RuntimeUI_SetWidgetBackgroundColor") { RuntimeUI_SetWidgetBackgroundColorPtr = funcPtr; return; }
}
void AddVoidPtrUInt64String(std::string_view funcName, std::function<void*(uint64_t, std::string_view)> funcPtr)
{
}
void AddVoidUInt32UInt32(std::string_view funcName, std::function<void(uint32_t, uint32_t)> funcPtr)
{
}
void AddVoidPtrString(std::string_view funcName, std::function<void*(std::string_view)> funcPtr)
{
if (funcName == "GetGameStateField") { GetGameStateFieldPtr = funcPtr; return; }
}
void AddBoolUInt64UInt64(std::string_view funcName, std::function<bool(uint64_t, uint64_t)> funcPtr)
{
if (funcName == "AI_IsGlobalState") { AI_IsGlobalStatePtr = funcPtr; return; }
if (funcName == "AI_IsCurrentState") { AI_IsCurrentStatePtr = funcPtr; return; }
if (funcName == "AI_IsPreviousState") { AI_IsPreviousStatePtr = funcPtr; return; }
}
void AddInt32Int32Int32(std::string_view funcName, std::function<int32_t(int32_t, int32_t)> funcPtr)
{
if (funcName == "GenerateRandomInteger") { GenerateRandomIntegerPtr = funcPtr; return; }
}
void AddFloatFloatFloat(std::string_view funcName, std::function<float(float, float)> funcPtr)
{
if (funcName == "GenerateRandomFloat") { GenerateRandomFloatPtr = funcPtr; return; }
}
void AddBoolUInt16(std::string_view funcName, std::function<bool(uint16_t)> funcPtr)
{
if (funcName == "Input_IsKeyPressed") { Input_IsKeyPressedPtr = funcPtr; return; }
if (funcName == "InputMap_IsPollingSlotPressed") { InputMap_IsPollingSlotPressedPtr = funcPtr; return; }
}
void AddBoolString(std::string_view funcName, std::function<bool(std::string_view)> funcPtr)
{
}
void AddBoolUInt64(std::string_view funcName, std::function<bool(uint64_t)> funcPtr)
{
if (funcName == "Scenes_IsSceneActive") { Scenes_IsSceneActivePtr = funcPtr; return; }
if (funcName == "RuntimeUI_IsUserInterfaceActiveFromHandle") { RuntimeUI_IsUserInterfaceActiveFromHandlePtr = funcPtr; return; }
}
void AddBoolUInt16UInt16(std::string_view funcName, std::function<bool(uint16_t, uint16_t)> funcPtr)
{
}
void AddBoolUIWidget(std::string_view funcName, std::function<bool(RuntimeUI::WidgetHandle)> funcPtr)
{
if (funcName == "RuntimeUI_IsWidgetSelected") { RuntimeUI_IsWidgetSelectedPtr = funcPtr; return; }
}
void AddVoidPtrUInt64UInt64UInt64(std::string_view funcName, std::function<void*(uint64_t, uint64_t, uint64_t)> funcPtr)
{
if (funcName == "Scenes_GetCustomComponentField") { Scenes_GetCustomComponentFieldPtr = funcPtr; return; }
}
void AddVoidUInt64UInt64UInt64VoidPtr(std::string_view funcName, std::function<void(uint64_t, uint64_t, uint64_t, void*)> funcPtr)
{
if (funcName == "Scenes_SetCustomComponentField") { Scenes_SetCustomComponentFieldPtr = funcPtr; return; }
}
void AddVoidUInt32UInt64UInt64Float(std::string_view funcName, std::function<void(uint32_t, uint64_t, uint64_t, float)> funcPtr)
{
if (funcName == "AI_SendMessage") { AI_SendMessagePtr = funcPtr; return; }
}
void AddRaycastResultVec2Vec2(std::string_view funcName, std::function<Physics::RaycastResult(Math::vec2, Math::vec2)> funcPtr)
{
if (funcName == "Physics_Raycast") { Physics_RaycastPtr = funcPtr; return; }
}
void AddStringUInt64(std::string_view funcName, std::function<std::string_view(uint64_t)> funcPtr)
{
if (funcName == "TagComponent_GetTag") { TagComponent_GetTagPtr = funcPtr; return; }
}
void AddStringUIWidget(std::string_view funcName, std::function<std::string_view(RuntimeUI::WidgetHandle)> funcPtr)
{
if (funcName == "RuntimeUI_GetWidgetText") { RuntimeUI_GetWidgetTextPtr = funcPtr; return; }
}
}
