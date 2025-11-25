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
static std::function<Math::vec2(uint64_t a)> Rigidbody2DComponent_GetLinearVelocityPtr {};
Math::vec2 Rigidbody2DComponent_GetLinearVelocity(uint64_t a)
{
	return Rigidbody2DComponent_GetLinearVelocityPtr(a);
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
static std::function<void(uint64_t a, Math::vec2 b)> Rigidbody2DComponent_SetLinearVelocityPtr {};
void Rigidbody2DComponent_SetLinearVelocity(uint64_t a, Math::vec2 b)
{
	Rigidbody2DComponent_SetLinearVelocityPtr(a, b);
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
if (funcName == "Rigidbody2DComponent_SetLinearVelocity") { Rigidbody2DComponent_SetLinearVelocityPtr = funcPtr; return; }
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
if (funcName == "Rigidbody2DComponent_GetLinearVelocity") { Rigidbody2DComponent_GetLinearVelocityPtr = funcPtr; return; }
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
void OpenNewSinglePlayer()
{
  SetGameStateField("CurrentLevel", (void*)&RValueToLValue(1));
  OpenCurrentLevel();
}

void SeekLocationOnUpdate(uint64_t aiEntity, float deltaTime)
{
  Math::vec3 aiLocation = TransformComponent_GetTranslation(aiEntity);
  float distance = *(float*)Scenes_GetCustomComponentField(aiEntity, 15329151067419175107, 0) - aiLocation.y;
  distance = distance < 0.0f ? distance * -1.0f : distance;
  if (distance < 0.5f)
  {
    AI_ChangeCurrentState(aiEntity, 15167304559679541373);
    return;
  }
  if (*(float*)Scenes_GetCustomComponentField(aiEntity, 15329151067419175107, 0) > aiLocation.y)
  {
    Player2MoveUp(deltaTime, *(bool*)Scenes_GetCustomComponentField(aiEntity, 8506492999786783749, 2));
  }
  else
  {
    Player2MoveDown(deltaTime, *(bool*)Scenes_GetCustomComponentField(aiEntity, 8506492999786783749, 2));
  }
}

void LeaveOnlineGameplay()
{
  LeaveCurrentSession();
  OpenMainMenu();
}

void HumanPlayer2MoveUp(float deltaTime)
{
  Player2MoveUp(deltaTime, InputMap_IsPollingSlotPressed(5));
}

void UpdateSessionUserSlot(uint16_t userSlot)
{
  RuntimeUI::WidgetHandle selectedWidget = userSlot == 0 ? RuntimeUI::WidgetHandle(15231606605394194830, 434740553) : RuntimeUI::WidgetHandle(15231606605394194830, 1711827978);
  RuntimeUI_SetWidgetText(selectedWidget, "Connected!");
}

void OpenLocalMultiplayer()
{
  RuntimeUI_LoadUserInterfaceFromHandle(15231606605394194830);
  RuntimeUI_SetDisplayWindow(RuntimeUI::WindowHandle(15231606605394194830, 1749121094), true);
  RuntimeUI_SetDisplayWindow(RuntimeUI::WindowHandle(15231606605394194830, 703637574), false);
  TransitionSceneFromHandle(7990001858466597669);
  InputMap_LoadInputMapFromHandle(6646695206662535356);
  PlaySoundFromHandle(8671885103280513201);
  PlayStereoSoundFromHandle(12818418233085346858);
  SetGameStateField("GameMode", (void*)&RValueToLValue(1));
  SetGameStateField("PlayerOneScore", (void*)&RValueToLValue(0));
  SetGameStateField("PlayerTwoScore", (void*)&RValueToLValue(0));
}

void UpdateOnlineCount(uint32_t count)
{
}

void OpenLevel3()
{
  RuntimeUI_LoadUserInterfaceFromHandle(15231606605394194830);
  RuntimeUI_SetDisplayWindow(RuntimeUI::WindowHandle(15231606605394194830, 1581560399), true);
  RuntimeUI_SetDisplayWindow(RuntimeUI::WindowHandle(15231606605394194830, 703637574), false);
  TransitionSceneFromHandle(12088062788627164698);
  InputMap_LoadInputMapFromHandle(6646695206662535356);
  PlaySoundFromHandle(8671885103280513201);
  PlayStereoSoundFromHandle(12818418233085346858);
  SetGameStateField("GameMode", (void*)&RValueToLValue(0));
  SetGameStateField("PlayerOneScore", (void*)&RValueToLValue(0));
  SetGameStateField("PlayerTwoScore", (void*)&RValueToLValue(0));
  SetGameStateField("CurrentLevel", (void*)&RValueToLValue(3));
  SetGameStateField("WinConditionValue", (void*)&RValueToLValue(10));
}

void UserLeftSession(uint16_t userSlot)
{
  std::string newText = "No Player " + std::to_string(userSlot + 1);
  RuntimeUI::WidgetHandle selectedWidget = userSlot == 0 ? RuntimeUI::WidgetHandle(15231606605394194830, 434740553) : RuntimeUI::WidgetHandle(15231606605394194830, 1711827978);
  RuntimeUI_SetWidgetText(selectedWidget, newText);
  RuntimeUI_SetWidgetText(RuntimeUI::WidgetHandle(15231606605394194830, 80147253), "online_lobby");
}

void CollidePlayer1(uint64_t ballEntity)
{
  if (InputMap_IsPollingSlotPressed(0))
  {
    float deflectionFactor = InputMap_IsPollingSlotPressed(4) ? 0.55f : 0.33f;
    Math::vec2 up = {0.0f, 1.0f};
    Math::vec2 currentVelocity = Rigidbody2DComponent_GetLinearVelocity(ballEntity);
    currentVelocity = glm::normalize(glm::normalize(currentVelocity) + up * deflectionFactor) * *(float*)Scenes_GetCustomComponentField(ballEntity, 8506492999786783749, 0);
    Rigidbody2DComponent_SetLinearVelocity(ballEntity, currentVelocity);
  }
  if (InputMap_IsPollingSlotPressed(1))
  {
    float deflectionFactor = InputMap_IsPollingSlotPressed(4) ? 0.55f : 0.33f;
    Math::vec2 up = {0.0f, -1.0f};
    Math::vec2 currentVelocity = Rigidbody2DComponent_GetLinearVelocity(ballEntity);
    currentVelocity = glm::normalize(glm::normalize(currentVelocity) + up * deflectionFactor) * *(float*)Scenes_GetCustomComponentField(ballEntity, 8506492999786783749, 0);
    Rigidbody2DComponent_SetLinearVelocity(ballEntity, currentVelocity);
  }
  PlaySoundFromHandle(6515589321809716456);
}

void OnCurrentSessionInit()
{
  RuntimeUI_SetWidgetText(RuntimeUI::WidgetHandle(15231606605394194830, 80147253), "Starting Session...");
}

void ApproveJoinSession(uint16_t userSlot)
{
  SetGameStateField("BallDirection", (void*)&RValueToLValue(0));
  RuntimeUI_LoadUserInterfaceFromHandle(15231606605394194830);
  RuntimeUI_SetDisplayWindow(RuntimeUI::WindowHandle(15231606605394194830, 2082948954), true);
  RuntimeUI_SetDisplayWindow(RuntimeUI::WindowHandle(15231606605394194830, 703637574), false);
  TransitionSceneFromHandle(2896275651350929705);
  InputMap_LoadInputMapFromHandle(7202480273432023967);
  PlaySoundFromHandle(8671885103280513201);
  PlayStereoSoundFromHandle(12818418233085346858);
  RuntimeUI::WidgetHandle widgetToUpdate = userSlot == 0 ? RuntimeUI::WidgetHandle(15231606605394194830, 434740553) : RuntimeUI::WidgetHandle(15231606605394194830, 1711827978);
  RuntimeUI_SetWidgetText(widgetToUpdate, "Connected!");
  SetGameStateField("GameMode", (void*)&RValueToLValue(2));
  SetGameStateField("PlayerOneScore", (void*)&RValueToLValue(0));
  SetGameStateField("PlayerTwoScore", (void*)&RValueToLValue(0));
}

void OnStartSession()
{
  uint16_t userSlot = GetActiveSessionSlot();
  RuntimeUI_SetDisplayWindow(RuntimeUI::WindowHandle(15231606605394194830, 1749121094), true);
  RuntimeUI_SetDisplayWindow(RuntimeUI::WindowHandle(15231606605394194830, 703637574), false);
  RuntimeUI_SetDisplayWindow(RuntimeUI::WindowHandle(15231606605394194830, 2082948954), false);
  InputMap_LoadInputMapFromHandle(7394775504069824075);
  PlaySoundFromHandle(8671885103280513201);
  if (userSlot == 0)
  {
    RuntimeUI_SetWidgetText(RuntimeUI::WidgetHandle(15231606605394194830, 1263890807), "");
  }
  else if (userSlot == 1)
  {
    RuntimeUI_SetWidgetText(RuntimeUI::WidgetHandle(15231606605394194830, 1665091489), "");
  }
  EnableReadyCheck();
}

void OpenMainMenu()
{
  RuntimeUI_LoadUserInterfaceFromHandle(7600774306835675584);
  TransitionSceneFromHandle(4149337072942010858);
  InputMap_LoadInputMapFromHandle(15180498886148191770);
  PlayStereoSoundFromHandle(18286149760878530696);
  SetGameStateField("GameMode", (void*)&RValueToLValue(3));
  RequestUserCount();
}

void HumanPlayer2MoveDown(float deltaTime)
{
  Player2MoveDown(deltaTime, InputMap_IsPollingSlotPressed(5));
}

void TopAndBottomWallCollision(uint64_t ballEntity)
{
  Math::vec2 horizontalDirection;
  Math::vec2 currentVelocity = Rigidbody2DComponent_GetLinearVelocity(ballEntity);
  if (currentVelocity.x > 0.0f)
  {
    horizontalDirection = {1.0f, 0.0f};
  }
  else
  {
    horizontalDirection = {-1.0f, 0.0f};
  }
  currentVelocity = glm::normalize(glm::normalize(currentVelocity) + horizontalDirection * 0.1f) * *(float*)Scenes_GetCustomComponentField(ballEntity, 8506492999786783749, 0);
  Rigidbody2DComponent_SetLinearVelocity(ballEntity, currentVelocity);
  PlaySoundFromHandle(6515589321809716456);
}

void OnConnectionTerminated()
{
}

void CollideLeftWall(uint64_t ballEntity)
{
  SetGameStateField("PlayerTwoScore", (void*)&RValueToLValue(*(uint16_t*)GetGameStateField("PlayerTwoScore") + 1));
  RuntimeUI_SetWidgetText(RuntimeUI::WidgetHandle(15231606605394194830, 169702511), std::to_string(*(uint16_t*)GetGameStateField("PlayerTwoScore")));
  Rigidbody2DComponent_SetLinearVelocity(ballEntity, {0.0f, 0.0f});
  PlaySoundFromHandle(2121478283880279507);
}

void AdvanceLevel()
{
  SetGameStateField("CurrentLevel", (void*)&RValueToLValue(*(uint16_t*)GetGameStateField("CurrentLevel") + 1));
  OpenCurrentLevel();
}

void TestSelectOption(std::string_view selectedOption)
{
  Log("TestSelectOption.kgscript", "3", "We are selecting an option");
  Log("TestSelectOption.kgscript", "4", selectedOption);
}

void OnReceiveSignal(uint16_t signalNum)
{
  uint16_t userSlot = GetActiveSessionSlot();
  if (signalNum == 1)
  {
    if (userSlot == 0)
    {
      SetGameStateField("PlayerOneScore", (void*)&RValueToLValue(*(uint16_t*)GetGameStateField("PlayerOneScore") + 1));
      RuntimeUI_SetWidgetText(RuntimeUI::WidgetHandle(15231606605394194830, 128068499), std::to_string(*(uint16_t*)GetGameStateField("PlayerOneScore")));
    }
    else if (userSlot == 1)
    {
      SetGameStateField("PlayerTwoScore", (void*)&RValueToLValue(*(uint16_t*)GetGameStateField("PlayerTwoScore") + 1));
      RuntimeUI_SetWidgetText(RuntimeUI::WidgetHandle(15231606605394194830, 169702511), std::to_string(*(uint16_t*)GetGameStateField("PlayerTwoScore")));
    }
    uint64_t ball = FindEntityHandleByName("Ball");
    Rigidbody2DComponent_SetLinearVelocity(ball, {0.0f, 0.0f});
    PlaySoundFromHandle(2121478283880279507);
    RuntimeUI_SetDisplayWindow(RuntimeUI::WindowHandle(15231606605394194830, 1749121094), true);
    InputMap_LoadInputMapFromHandle(7394775504069824075);
    EnableReadyCheck();
  }
}

void StartOnlineGame()
{
  uint16_t userSlot = GetActiveSessionSlot();
  Log("StartOnlineGame.kgscript", "5", std::to_string(userSlot));
  if (userSlot == 0)
  {
    InputMap_LoadInputMapFromHandle(7279032077281871616);
    Log("StartOnlineGame.kgscript", "9", "We loaded runtime 1 input");
  }
  else if (userSlot == 1)
  {
    InputMap_LoadInputMapFromHandle(11366918542566920871);
    Log("StartOnlineGame.kgscript", "14", "We loaded runtime 2 input");
  }
  RuntimeUI_SetDisplayWindow(RuntimeUI::WindowHandle(15231606605394194830, 1749121094), false);
  RuntimeUI_SetDisplayWindow(RuntimeUI::WindowHandle(15231606605394194830, 2082948954), false);
  RuntimeUI_SetDisplayWindow(RuntimeUI::WindowHandle(15231606605394194830, 703637574), true);
  uint64_t player1 = FindEntityHandleByName("Player1");
  TransformComponent_SetTranslation(player1, *(Math::vec3*)Scenes_GetCustomComponentField(player1, 2736904612472256316, 0));
  uint64_t player2 = FindEntityHandleByName("Player2");
  TransformComponent_SetTranslation(player2, *(Math::vec3*)Scenes_GetCustomComponentField(player2, 2736904612472256316, 0));
  uint64_t ball = FindEntityHandleByName("Ball");
  TransformComponent_SetTranslation(ball, *(Math::vec3*)Scenes_GetCustomComponentField(ball, 2736904612472256316, 0));
  uint16_t ballDirection = *(uint16_t*)GetGameStateField("BallDirection");
  Math::vec2 velocity = {0.0f, 0.0f};
  if (ballDirection == 0)
  {
    velocity.x = -1.0f;
    SetGameStateField("BallDirection", (void*)&RValueToLValue(1));
  }
  else
  {
    velocity.x = 1.0f;
    SetGameStateField("BallDirection", (void*)&RValueToLValue(0));
  }
  Rigidbody2DComponent_SetLinearVelocity(ball, velocity * *(float*)Scenes_GetCustomComponentField(ball, 8506492999786783749, 0));
}

void PlayMenuSelect()
{
  PlaySoundFromHandle(4772404760776306022);
}

void SeekBottomOnUpdate(uint64_t aiEntity, float deltaTime)
{
  Math::vec3 aiLocation = TransformComponent_GetTranslation(aiEntity);
  float distance = -11.15f - aiLocation.y;
  distance = distance < 0.0f ? distance * -1.0f : distance;
  if (distance < 0.2f)
  {
    AI_ChangeCurrentState(aiEntity, 15167304559679541373);
    return;
  }
  if (-11.15f > aiLocation.y)
  {
    Player2MoveUp(deltaTime, *(bool*)Scenes_GetCustomComponentField(aiEntity, 8506492999786783749, 2));
  }
  else
  {
    Player2MoveDown(deltaTime, *(bool*)Scenes_GetCustomComponentField(aiEntity, 8506492999786783749, 2));
  }
}

void StartGame()
{
  uint64_t player1 = FindEntityHandleByName("Player1");
  uint64_t player2 = FindEntityHandleByName("Player2");
  if (*(uint16_t*)GetGameStateField("GameMode") == 0)
  {
    RuntimeUI_SetDisplayWindow(RuntimeUI::WindowHandle(15231606605394194830, 1581560399), false);
    InputMap_LoadInputMapFromHandle(17913597890009650806);
    AI_ChangeCurrentState(player2, 13505644385975373738);
  }
  else
  {
    RuntimeUI_SetDisplayWindow(RuntimeUI::WindowHandle(15231606605394194830, 1749121094), false);
    InputMap_LoadInputMapFromHandle(6141088209929652030);
  }
  RuntimeUI_SetDisplayWindow(RuntimeUI::WindowHandle(15231606605394194830, 2082948954), false);
  RuntimeUI_SetDisplayWindow(RuntimeUI::WindowHandle(15231606605394194830, 703637574), true);
  TransformComponent_SetTranslation(player1, *(Math::vec3*)Scenes_GetCustomComponentField(player1, 2736904612472256316, 0));
  TransformComponent_SetTranslation(player2, *(Math::vec3*)Scenes_GetCustomComponentField(player2, 2736904612472256316, 0));
  uint64_t ball = FindEntityHandleByName("Ball");
  TransformComponent_SetTranslation(ball, *(Math::vec3*)Scenes_GetCustomComponentField(ball, 2736904612472256316, 0));
  int32_t directionChoice = GenerateRandomInteger(0, 1);
  Math::vec2 velocity = {0.0f, 0.0f};
  if (directionChoice == 0)
  {
    velocity.x = -1.0f;
  }
  else
  {
    velocity.x = 1.0f;
  }
  Rigidbody2DComponent_SetLinearVelocity(ball, velocity * *(float*)Scenes_GetCustomComponentField(ball, 8506492999786783749, 0));
}

void OpenLevel1()
{
  RuntimeUI_LoadUserInterfaceFromHandle(15231606605394194830);
  RuntimeUI_SetDisplayWindow(RuntimeUI::WindowHandle(15231606605394194830, 1581560399), true);
  RuntimeUI_SetDisplayWindow(RuntimeUI::WindowHandle(15231606605394194830, 703637574), false);
  TransitionSceneFromHandle(9638216380065234896);
  InputMap_LoadInputMapFromHandle(6646695206662535356);
  PlaySoundFromHandle(8671885103280513201);
  PlayStereoSoundFromHandle(12818418233085346858);
  SetGameStateField("GameMode", (void*)&RValueToLValue(0));
  SetGameStateField("PlayerOneScore", (void*)&RValueToLValue(0));
  SetGameStateField("PlayerTwoScore", (void*)&RValueToLValue(0));
  SetGameStateField("CurrentLevel", (void*)&RValueToLValue(1));
  SetGameStateField("WinConditionValue", (void*)&RValueToLValue(10));
}

void SeekBallOnUpdate(uint64_t aiEntity, float deltaTime)
{
  uint64_t ballEntity = FindEntityHandleByName("Ball");
  Math::vec3 ballLocation = TransformComponent_GetTranslation(ballEntity);
  Math::vec3 aiLocation = TransformComponent_GetTranslation(aiEntity);
  float distance = ballLocation.y - aiLocation.y;
  distance = distance < 0.0f ? distance * -1.0f : distance;
  if (distance < 0.5f)
  {
    return;
  }
  if (ballLocation.y > aiLocation.y)
  {
    Player2MoveUp(deltaTime, *(bool*)Scenes_GetCustomComponentField(aiEntity, 8506492999786783749, 2));
  }
  else
  {
    Player2MoveDown(deltaTime, *(bool*)Scenes_GetCustomComponentField(aiEntity, 8506492999786783749, 2));
  }
}

void DeflectBallOnUpdate(uint64_t aiEntity, float deltaTime)
{
  uint64_t ballEntity = FindEntityHandleByName("Ball");
  Math::vec3 aiEntityLocation = TransformComponent_GetTranslation(aiEntity);
  Math::vec3 ballLocation = TransformComponent_GetTranslation(ballEntity);
  float threshold = 3.0f;
  if (glm::distance(aiEntityLocation, ballLocation) > threshold)
  {
    SeekBallOnUpdate(aiEntity, deltaTime);
  }
  else
  {
    if (*(bool*)Scenes_GetCustomComponentField(aiEntity, 15329151067419175107, 1))
    {
      Player2MoveUp(deltaTime, *(bool*)Scenes_GetCustomComponentField(aiEntity, 8506492999786783749, 2));
    }
    else
    {
      Player2MoveDown(deltaTime, *(bool*)Scenes_GetCustomComponentField(aiEntity, 8506492999786783749, 2));
    }
  }
}

void HumanPlayer1MoveDown(float deltaTime)
{
  Player1MoveDown(deltaTime, InputMap_IsPollingSlotPressed(4));
}

void Player2UpdateNetwork(uint64_t activeEntity, float deltaTime)
{
  uint16_t userSlot = GetActiveSessionSlot();
  if (userSlot == 1)
  {
    SendAllEntityLocation(activeEntity, TransformComponent_GetTranslation(activeEntity));
  }
}

void Player1UpdateNetwork(uint64_t activeEntity, float deltaTime)
{
  uint16_t userSlot = GetActiveSessionSlot();
  if (userSlot == 0)
  {
    SendAllEntityLocation(activeEntity, TransformComponent_GetTranslation(activeEntity));
  }
}

void OnlinePlayer2MoveDown(float deltaTime)
{
  Player2MoveDown(deltaTime, InputMap_IsPollingSlotPressed(5));
}

void OnMoveCursor()
{
  PlaySoundFromHandle(8598410770696152985);
}

bool BallOnlineCollisionStart(uint64_t currentEntity, uint64_t otherEntity)
{
  uint16_t userSlot = GetActiveSessionSlot();
  bool collisionHandled = false;
  std::string otherEntityTag = (std::string)TagComponent_GetTag(otherEntity);
  if (otherEntityTag == "Left Wall")
  {
    if (userSlot == 0)
    {
      CollideLeftWall(currentEntity);
      RuntimeUI_SetDisplayWindow(RuntimeUI::WindowHandle(15231606605394194830, 1749121094), true);
      InputMap_LoadInputMapFromHandle(7394775504069824075);
      SignalAll(1);
      EnableReadyCheck();
      collisionHandled = true;
    }
    else if (userSlot == 1)
    {
      Rigidbody2DComponent_SetLinearVelocity(currentEntity, {0.0f, 0.0f});
    }
  }
  else if (otherEntityTag == "Right Wall")
  {
    if (userSlot == 1)
    {
      CollideRightWall(currentEntity);
      RuntimeUI_SetDisplayWindow(RuntimeUI::WindowHandle(15231606605394194830, 1749121094), true);
      InputMap_LoadInputMapFromHandle(7394775504069824075);
      SignalAll(1);
      EnableReadyCheck();
      collisionHandled = true;
    }
    else if (userSlot == 0)
    {
      Rigidbody2DComponent_SetLinearVelocity(currentEntity, {0.0f, 0.0f});
    }
  }
  else if (otherEntityTag == "Top Wall" || otherEntityTag == "Bottom Wall")
  {
    TopAndBottomWallCollision(currentEntity);
    collisionHandled = true;
  }
  else if (otherEntityTag == "Player1")
  {
    if (userSlot == 0)
    {
      CollidePlayer1(currentEntity);
    }
    else
    {
      PlaySoundFromHandle(6515589321809716456);
    }
    collisionHandled = true;
  }
  else if (otherEntityTag == "Player2")
  {
    if (userSlot == 1)
    {
      CollidePlayer2(currentEntity);
    }
    else
    {
      PlaySoundFromHandle(6515589321809716456);
    }
    collisionHandled = true;
  }
  return collisionHandled;
}

void OpenGit()
{
  Log("OpenGit.kgscript", "3", "We are opening sometjhing");
}

bool BallOnlineCollisionEnd(uint64_t currentEntity, uint64_t otherEntity)
{
  std::string otherEntityTag = (std::string)TagComponent_GetTag(otherEntity);
  uint16_t userSlot = GetActiveSessionSlot();
  if (userSlot == std::numeric_limits<uint16_t>().max())
  {
    return false;
  }
  bool collisionHandled = false;
  if (otherEntityTag == "Player1")
  {
    if (userSlot == 0)
    {
      Math::vec3 updateVector = TransformComponent_GetTranslation(currentEntity);
      updateVector.x = updateVector.x + 0.2f;
      SendAllEntityPhysics(currentEntity, updateVector, Rigidbody2DComponent_GetLinearVelocity(currentEntity));
    }
    collisionHandled = true;
  }
  else if (otherEntityTag == "Player2")
  {
    if (userSlot == 1)
    {
      Math::vec3 updateVector = TransformComponent_GetTranslation(currentEntity);
      updateVector.x = updateVector.x - 0.2f;
      SendAllEntityPhysics(currentEntity, updateVector, Rigidbody2DComponent_GetLinearVelocity(currentEntity));
    }
    collisionHandled = true;
  }
  return collisionHandled;
}

bool BallSinglePlayerCollisionStart(uint64_t currentEntity, uint64_t otherEntity)
{
  bool collisionHandled = false;
  std::string otherEntityTag = (std::string)TagComponent_GetTag(otherEntity);
  if (otherEntityTag == "Left Wall")
  {
    CollideLeftWall(currentEntity);
    if (*(uint16_t*)GetGameStateField("PlayerTwoScore") >= *(uint16_t*)GetGameStateField("WinConditionValue"))
    {
      RuntimeUI_SetDisplayWindow(RuntimeUI::WindowHandle(15231606605394194830, 1840282323), true);
      uint64_t player2 = FindEntityHandleByName("Player2");
      AI_ClearAllStates(player2);
      InputMap_LoadInputMapFromHandle(18297564631219812115);
    }
    else
    {
      RuntimeUI_SetDisplayWindow(RuntimeUI::WindowHandle(15231606605394194830, 1581560399), true);
      uint64_t player2 = FindEntityHandleByName("Player2");
      AI_ClearAllStates(player2);
      InputMap_LoadInputMapFromHandle(6646695206662535356);
    }
    collisionHandled = true;
  }
  else if (otherEntityTag == "Player2ProximitySensor")
  {
    uint64_t player2 = FindEntityHandleByName("Player2");
    int32_t randomValue = GenerateRandomInteger(0, 100);
    uint16_t deflectUp = *(uint16_t*)Scenes_GetCustomComponentField(player2, 6324027423643995032, 0) / 2;
    uint16_t deflectDown = *(uint16_t*)Scenes_GetCustomComponentField(player2, 6324027423643995032, 0);
    if (randomValue <= deflectUp)
    {
      Scenes_SetCustomComponentField(player2, 15329151067419175107, 1, (void*)&RValueToLValue(false));
      AI_ChangeCurrentState(player2, 10559578475286957955);
      DetermineDash(player2);
    }
    else if (randomValue <= deflectDown)
    {
      Scenes_SetCustomComponentField(player2, 15329151067419175107, 1, (void*)&RValueToLValue(true));
      AI_ChangeCurrentState(player2, 10559578475286957955);
      DetermineDash(player2);
    }
    else
    {
      AI_ChangeCurrentState(player2, 13505644385975373738);
      DetermineDash(player2);
    }
  }
  else if (otherEntityTag == "Right Wall")
  {
    CollideRightWall(currentEntity);
    if (*(uint16_t*)GetGameStateField("PlayerOneScore") >= *(uint16_t*)GetGameStateField("WinConditionValue"))
    {
      RuntimeUI_SetDisplayWindow(RuntimeUI::WindowHandle(15231606605394194830, 1181515144), true);
      uint64_t player2 = FindEntityHandleByName("Player2");
      AI_ClearAllStates(player2);
      InputMap_LoadInputMapFromHandle(4877393880283468248);
    }
    else
    {
      RuntimeUI_SetDisplayWindow(RuntimeUI::WindowHandle(15231606605394194830, 1581560399), true);
      uint64_t player2 = FindEntityHandleByName("Player2");
      AI_ClearAllStates(player2);
      InputMap_LoadInputMapFromHandle(6646695206662535356);
    }
    collisionHandled = true;
  }
  else if (otherEntityTag == "Top Wall" || otherEntityTag == "Bottom Wall")
  {
    TopAndBottomWallCollision(currentEntity);
    collisionHandled = true;
  }
  else if (otherEntityTag == "Player1")
  {
    CollidePlayer1(currentEntity);
    collisionHandled = true;
  }
  else if (otherEntityTag == "Player2")
  {
    if (AI_IsCurrentState(otherEntity, 10559578475286957955))
    {
      float deflectionFactor = 0.33f;
      Math::vec2 direction;
      if (*(bool*)Scenes_GetCustomComponentField(otherEntity, 15329151067419175107, 1))
      {
        direction = {0.0f, 1.0f};
      }
      else
      {
        direction = {0.0f, -1.0f};
      }
      Math::vec2 currentVelocity = Rigidbody2DComponent_GetLinearVelocity(currentEntity);
      currentVelocity = glm::normalize(glm::normalize(currentVelocity) + direction * deflectionFactor) * *(float*)Scenes_GetCustomComponentField(currentEntity, 8506492999786783749, 0);
      Rigidbody2DComponent_SetLinearVelocity(currentEntity, currentVelocity);
    }
    else
    {
      float deflectionFactor = 0.33f;
      Math::vec2 currentVelocity = Rigidbody2DComponent_GetLinearVelocity(currentEntity);
      currentVelocity = glm::normalize(glm::normalize(currentVelocity) * deflectionFactor) * *(float*)Scenes_GetCustomComponentField(currentEntity, 8506492999786783749, 0);
      Rigidbody2DComponent_SetLinearVelocity(currentEntity, currentVelocity);
    }
    PlaySoundFromHandle(6515589321809716456);
    collisionHandled = true;
  }
  return collisionHandled;
}

void CollidePlayer2(uint64_t ballEntity)
{
  if (InputMap_IsPollingSlotPressed(2))
  {
    float deflectionFactor = InputMap_IsPollingSlotPressed(5) ? 0.55f : 0.33f;
    Math::vec2 up = {0.0f, 1.0f};
    Math::vec2 currentVelocity = Rigidbody2DComponent_GetLinearVelocity(ballEntity);
    currentVelocity = glm::normalize(glm::normalize(currentVelocity) + up * deflectionFactor) * *(float*)Scenes_GetCustomComponentField(ballEntity, 8506492999786783749, 0);
    Rigidbody2DComponent_SetLinearVelocity(ballEntity, currentVelocity);
  }
  if (InputMap_IsPollingSlotPressed(3))
  {
    float deflectionFactor = InputMap_IsPollingSlotPressed(5) ? 0.55f : 0.33f;
    Math::vec2 down = {0.0f, -1.0f};
    Math::vec2 currentVelocity = Rigidbody2DComponent_GetLinearVelocity(ballEntity);
    currentVelocity = glm::normalize(glm::normalize(currentVelocity) + down * deflectionFactor) * *(float*)Scenes_GetCustomComponentField(ballEntity, 8506492999786783749, 0);
    Rigidbody2DComponent_SetLinearVelocity(ballEntity, currentVelocity);
  }
  PlaySoundFromHandle(6515589321809716456);
}

void SeekTopOnUpdate(uint64_t aiEntity, float deltaTime)
{
  Math::vec3 aiLocation = TransformComponent_GetTranslation(aiEntity);
  float distance = 11.15 - aiLocation.y;
  distance = distance < 0.0f ? distance * -1.0f : distance;
  if (distance < 0.2f)
  {
    AI_ChangeCurrentState(aiEntity, 15167304559679541373);
    return;
  }
  if (11.15f > aiLocation.y)
  {
    Player2MoveUp(deltaTime, *(bool*)Scenes_GetCustomComponentField(aiEntity, 8506492999786783749, 2));
  }
  else
  {
    Player2MoveDown(deltaTime, *(bool*)Scenes_GetCustomComponentField(aiEntity, 8506492999786783749, 2));
  }
}

bool BallSinglePlayerCollisionEnd(uint64_t currentEntity, uint64_t otherEntity)
{
  std::string otherEntityTag = (std::string)TagComponent_GetTag(otherEntity);
  ClearDebugLines();
  ClearDebugPoints();
  Math::vec2 raycastVector = glm::normalize(Rigidbody2DComponent_GetLinearVelocity(currentEntity)) * 50.0f;
  Math::vec3 currentStartLocation3D = TransformComponent_GetTranslation(currentEntity);
  Math::vec2 currentStartLocation2D = {currentStartLocation3D.x, currentStartLocation3D.y};
  Math::vec2 currentEndLocation2D = currentStartLocation2D + raycastVector;
  uint32_t maxIterations = 5;
  uint32_t currentIteration = 0;
  while (currentIteration < maxIterations)
  {
    Physics::RaycastResult results = Physics_Raycast(currentStartLocation2D, currentEndLocation2D);
    if (results.m_Success)
    {
      Math::vec2 collisionPoint2D = results.m_Location;
      Math::vec3 startPoint3D = {currentStartLocation2D.x, currentStartLocation2D.y, 0.0f};
      Math::vec3 endPoint3D = {collisionPoint2D.x, collisionPoint2D.y, 0.0f};
      AddDebugLine(startPoint3D, endPoint3D);
      AddDebugPoint(startPoint3D);
      AddDebugPoint(endPoint3D);
      uint64_t collidedEntity = results.m_Entity;
      std::string collidedEntityTag = (std::string)TagComponent_GetTag(collidedEntity);
      if (collidedEntityTag == "Top Wall" || collidedEntityTag == "Bottom Wall")
      {
        Math::vec2 horizontalDirection;
        Math::vec2 currentVelocity = Rigidbody2DComponent_GetLinearVelocity(currentEntity);
        if (currentVelocity.x > 0.0f)
        {
          horizontalDirection = {1.0f, 0.0f};
        }
        else
        {
          horizontalDirection = {-1.0f, 0.0f};
        }
        currentStartLocation2D = collisionPoint2D;
        raycastVector = {raycastVector.x, -1.0f * raycastVector.y};
        currentEndLocation2D = currentStartLocation2D + raycastVector + horizontalDirection * 0.1f;
      }
      else if (collidedEntityTag == "Player2ProximitySensor")
      {
        currentStartLocation2D = collisionPoint2D;
      }
      else if (collidedEntityTag == "Player2")
      {
        uint64_t player2 = FindEntityHandleByName("Player2");
        Scenes_SetCustomComponentField(player2, 15329151067419175107, 0, (void*)&RValueToLValue(endPoint3D.y));
        int32_t randomValue = GenerateRandomInteger(0, 100);
        uint16_t targetRatio = *(uint16_t*)Scenes_GetCustomComponentField(player2, 6324027423643995032, 2) + 15;
        if (randomValue <= targetRatio)
        {
          AI_ChangeCurrentState(player2, 9099345613034300062);
        }
        else
        {
          if (randomValue <= 25)
          {
            AI_ChangeCurrentState(player2, 7133204117511130953);
          }
          else if (randomValue <= 50)
          {
            AI_ChangeCurrentState(player2, 11517908104213186627);
          }
          else if (randomValue <= 75)
          {
            AI_ChangeCurrentState(player2, 12403686596114338374);
          }
          else
          {
            AI_ChangeCurrentState(player2, 15167304559679541373);
          }
        }
        DetermineDash(player2);
        break;      }
      else if (collidedEntityTag == "Right Wall")
      {
        uint64_t player2 = FindEntityHandleByName("Player2");
        Math::vec3 player2Location = TransformComponent_GetTranslation(player2);
        float slope = raycastVector.y / raycastVector.x;
        Scenes_SetCustomComponentField(player2, 15329151067419175107, 0, (void*)&RValueToLValue(slope * player2Location.x - currentStartLocation2D.x * slope + currentStartLocation2D.y));
        int32_t randomValue = GenerateRandomInteger(0, 100);
        uint16_t targetRatio = *(uint16_t*)Scenes_GetCustomComponentField(player2, 6324027423643995032, 2) + 15;
        if (randomValue <= targetRatio)
        {
          AI_ChangeCurrentState(player2, 9099345613034300062);
        }
        else
        {
          if (randomValue <= 25)
          {
            AI_ChangeCurrentState(player2, 7133204117511130953);
          }
          else if (randomValue <= 50)
          {
            AI_ChangeCurrentState(player2, 11517908104213186627);
          }
          else if (randomValue <= 75)
          {
            AI_ChangeCurrentState(player2, 12403686596114338374);
          }
          else
          {
            AI_ChangeCurrentState(player2, 15167304559679541373);
          }
        }
        DetermineDash(player2);
        break;      }
      else if (collidedEntityTag == "Left Wall")
      {
        break;      }
      else if (collidedEntityTag == "Player1")
      {
        break;      }
    }
    else
    {
      Log("BallSinglePlayerCollisionEnd.kgscript", "149", "Failed to calculate AI terminal location");
      break;    }
    currentIteration = currentIteration + 1;
  }
  if (otherEntityTag == "Player2")
  {
    uint64_t player2 = FindEntityHandleByName("Player2");
    DetermineDash(player2);
    int32_t randomValue = GenerateRandomInteger(0, 100);
    if (randomValue <= *(uint16_t*)Scenes_GetCustomComponentField(player2, 6324027423643995032, 2))
    {
      if (randomValue <= 50)
      {
        AI_ChangeCurrentState(player2, 13505644385975373738);
      }
      else
      {
        AI_ChangeCurrentState(player2, 18063135827619892039);
      }
    }
    else
    {
      if (randomValue <= 25)
      {
        AI_ChangeCurrentState(player2, 7133204117511130953);
      }
      else if (randomValue <= 50)
      {
        AI_ChangeCurrentState(player2, 11517908104213186627);
      }
      else if (randomValue <= 75)
      {
        AI_ChangeCurrentState(player2, 12403686596114338374);
      }
      else
      {
        AI_ChangeCurrentState(player2, 15167304559679541373);
      }
    }
  }
  return true;
}

bool BallLocalMultiCollisionStart(uint64_t currentEntity, uint64_t otherEntity)
{
  bool collisionHandled = false;
  std::string otherEntityTag = (std::string)TagComponent_GetTag(otherEntity);
  if (otherEntityTag == "Left Wall")
  {
    CollideLeftWall(currentEntity);
    RuntimeUI_SetDisplayWindow(RuntimeUI::WindowHandle(15231606605394194830, 1749121094), true);
    InputMap_LoadInputMapFromHandle(6646695206662535356);
    collisionHandled = true;
  }
  else if (otherEntityTag == "Right Wall")
  {
    CollideRightWall(currentEntity);
    RuntimeUI_SetDisplayWindow(RuntimeUI::WindowHandle(15231606605394194830, 1749121094), true);
    InputMap_LoadInputMapFromHandle(6646695206662535356);
    collisionHandled = true;
  }
  else if (otherEntityTag == "Top Wall" || otherEntityTag == "Bottom Wall")
  {
    TopAndBottomWallCollision(currentEntity);
    collisionHandled = true;
  }
  else if (otherEntityTag == "Player1")
  {
    CollidePlayer1(currentEntity);
    collisionHandled = true;
  }
  else if (otherEntityTag == "Player2")
  {
    CollidePlayer2(currentEntity);
    collisionHandled = true;
  }
  return collisionHandled;
}

void CollideRightWall(uint64_t ballEntity)
{
  SetGameStateField("PlayerOneScore", (void*)&RValueToLValue(*(uint16_t*)GetGameStateField("PlayerOneScore") + 1));
  RuntimeUI_SetWidgetText(RuntimeUI::WidgetHandle(15231606605394194830, 128068499), std::to_string(*(uint16_t*)GetGameStateField("PlayerOneScore")));
  Rigidbody2DComponent_SetLinearVelocity(ballEntity, {0.0f, 0.0f});
  PlaySoundFromHandle(2121478283880279507);
}

void OpenLevel2()
{
  RuntimeUI_LoadUserInterfaceFromHandle(15231606605394194830);
  RuntimeUI_SetDisplayWindow(RuntimeUI::WindowHandle(15231606605394194830, 1581560399), true);
  RuntimeUI_SetDisplayWindow(RuntimeUI::WindowHandle(15231606605394194830, 703637574), false);
  TransitionSceneFromHandle(3787373636680652895);
  InputMap_LoadInputMapFromHandle(6646695206662535356);
  PlaySoundFromHandle(8671885103280513201);
  PlayStereoSoundFromHandle(12818418233085346858);
  SetGameStateField("GameMode", (void*)&RValueToLValue(0));
  SetGameStateField("PlayerOneScore", (void*)&RValueToLValue(0));
  SetGameStateField("PlayerTwoScore", (void*)&RValueToLValue(0));
  SetGameStateField("CurrentLevel", (void*)&RValueToLValue(2));
  SetGameStateField("WinConditionValue", (void*)&RValueToLValue(10));
}

void OpenCurrentLevel()
{
  uint16_t currentLevel = *(uint16_t*)GetGameStateField("CurrentLevel");
  if (currentLevel == 0 || currentLevel == 1)
  {
    OpenLevel1();
  }
  else if (currentLevel == 2)
  {
    OpenLevel2();
  }
  else if (currentLevel == 3)
  {
    OpenLevel3();
  }
  else if (currentLevel == 4)
  {
    OpenMainMenu();
  }
  else
  {
    Log("OpenCurrentLevel.kgscript", "25", "Invalid level provided to AdvanceLevel() function");
  }
}

void HumanPlayer1MoveUp(float deltaTime)
{
  Player1MoveUp(deltaTime, InputMap_IsPollingSlotPressed(4));
}

void Player1MoveUp(float deltaTime, bool isDashing)
{
  uint64_t currentEntity = FindEntityHandleByName("Player1");
  Math::vec3 translation = TransformComponent_GetTranslation(currentEntity);
  bool upperLimit = translation.y >= 11.15f;
  bool lowerLimit = translation.y <= -11.15f;
  float speed = isDashing ? *(float*)Scenes_GetCustomComponentField(currentEntity, 8506492999786783749, 0) * *(float*)Scenes_GetCustomComponentField(currentEntity, 8506492999786783749, 1) : *(float*)Scenes_GetCustomComponentField(currentEntity, 8506492999786783749, 0);
  Math::vec3 velocity = {0.0f, 0.0f, 0.0f};
  if (!upperLimit)
  {
    velocity.y = 1.0f;
  }
  velocity = velocity * speed * deltaTime;
  TransformComponent_SetTranslation(currentEntity, TransformComponent_GetTranslation(currentEntity) + velocity);
}

void DetermineDash(uint64_t aiEntity)
{
  int32_t randomValue = GenerateRandomInteger(0, 100);
  if (randomValue <= *(uint16_t*)Scenes_GetCustomComponentField(aiEntity, 6324027423643995032, 1))
  {
    Scenes_SetCustomComponentField(aiEntity, 8506492999786783749, 2, (void*)&RValueToLValue(true));
  }
  else
  {
    Scenes_SetCustomComponentField(aiEntity, 8506492999786783749, 2, (void*)&RValueToLValue(false));
  }
}

void Player1MoveDown(float deltaTime, bool isDashing)
{
  uint64_t currentEntity = FindEntityHandleByName("Player1");
  Math::vec3 translation = TransformComponent_GetTranslation(currentEntity);
  bool upperLimit = translation.y >= 11.15;
  bool lowerLimit = translation.y <= -11.15;
  float speed = isDashing ? *(float*)Scenes_GetCustomComponentField(currentEntity, 8506492999786783749, 0) * *(float*)Scenes_GetCustomComponentField(currentEntity, 8506492999786783749, 1) : *(float*)Scenes_GetCustomComponentField(currentEntity, 8506492999786783749, 0);
  Math::vec3 velocity = {0.0f, 0.0f, 0.0f};
  if (!lowerLimit)
  {
    velocity.y = -1.0f;
  }
  velocity = velocity * speed * deltaTime;
  TransformComponent_SetTranslation(currentEntity, TransformComponent_GetTranslation(currentEntity) + velocity);
}

void Player2MoveDown(float deltaTime, bool isDashing)
{
  uint64_t currentEntity = FindEntityHandleByName("Player2");
  Math::vec3 translation = TransformComponent_GetTranslation(currentEntity);
  bool upperLimit = translation.y >= 11.15;
  bool lowerLimit = translation.y <= -11.15;
  float speed = isDashing ? *(float*)Scenes_GetCustomComponentField(currentEntity, 8506492999786783749, 0) * *(float*)Scenes_GetCustomComponentField(currentEntity, 8506492999786783749, 1) : *(float*)Scenes_GetCustomComponentField(currentEntity, 8506492999786783749, 0);
  Math::vec3 velocity = {0.0f, 0.0f, 0.0f};
  if (!lowerLimit)
  {
    velocity.y = -1.0f;
  }
  velocity = velocity * speed * deltaTime;
  TransformComponent_SetTranslation(currentEntity, TransformComponent_GetTranslation(currentEntity) + velocity);
}

void Player2MoveUp(float deltaTime, bool isDashing)
{
  uint64_t currentEntity = FindEntityHandleByName("Player2");
  Math::vec3 translation = TransformComponent_GetTranslation(currentEntity);
  bool upperLimit = translation.y >= 11.15f;
  bool lowerLimit = translation.y <= -11.15f;
  float speed = isDashing ? *(float*)Scenes_GetCustomComponentField(currentEntity, 8506492999786783749, 0) * *(float*)Scenes_GetCustomComponentField(currentEntity, 8506492999786783749, 1) : *(float*)Scenes_GetCustomComponentField(currentEntity, 8506492999786783749, 0);
  Math::vec3 velocity = {0.0f, 0.0f, 0.0f};
  if (!upperLimit)
  {
    velocity.y = 1.0f;
  }
  velocity = velocity * speed * deltaTime;
  TransformComponent_SetTranslation(currentEntity, TransformComponent_GetTranslation(currentEntity) + velocity);
}

void SeekMiddleOnUpdate(uint64_t aiEntity, float deltaTime)
{
  Math::vec3 aiLocation = TransformComponent_GetTranslation(aiEntity);
  float distance = 0.0f - aiLocation.y;
  distance = distance < 0.0f ? distance * -1.0f : distance;
  if (distance < 0.2f)
  {
    AI_ChangeCurrentState(aiEntity, 15167304559679541373);
    return;
  }
  if (0.0f > aiLocation.y)
  {
    Player2MoveUp(deltaTime, *(bool*)Scenes_GetCustomComponentField(aiEntity, 8506492999786783749, 2));
  }
  else
  {
    Player2MoveDown(deltaTime, *(bool*)Scenes_GetCustomComponentField(aiEntity, 8506492999786783749, 2));
  }
}

void AvoidBallOnUpdate(uint64_t aiEntity, float deltaTime)
{
  uint64_t ballEntity = FindEntityHandleByName("Ball");
  Math::vec3 ballLocation = TransformComponent_GetTranslation(ballEntity);
  Math::vec3 aiLocation = TransformComponent_GetTranslation(aiEntity);
  float distance = ballLocation.y - aiLocation.y;
  distance = distance < 0.0f ? distance * -1.0f : distance;
  if (distance < 0.5f)
  {
    return;
  }
  if (ballLocation.y < aiLocation.y)
  {
    Player2MoveUp(deltaTime, *(bool*)Scenes_GetCustomComponentField(aiEntity, 8506492999786783749, 2));
  }
  else
  {
    Player2MoveDown(deltaTime, *(bool*)Scenes_GetCustomComponentField(aiEntity, 8506492999786783749, 2));
  }
}

void OnlinePlayer2MoveUp(float deltaTime)
{
  Player2MoveUp(deltaTime, InputMap_IsPollingSlotPressed(5));
}

void OnHover()
{
  PlaySoundFromHandle(8598410770696152985);
}

void ConnectToServer()
{
  if (!RuntimeUI_IsUserInterfaceActiveFromHandle(7600774306835675584))
  {
    return;
  }
  RuntimeUI_SetDisplayWindow(RuntimeUI::WindowHandle(7600774306835675584, 1312719583), false);
  RuntimeUI_SetDisplayWindow(RuntimeUI::WindowHandle(7600774306835675584, 1208738707), true);
  RuntimeUI_ClearSelectedWidget();
  RequestJoinSession();
}

}
