#include "ExportHeader.h"
namespace Kargono
{
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
static std::function<void(const std::string& a)> LogPtr {};
void Log(const std::string& a)
{
	LogPtr(a);
}
static std::function<const std::string&(uint64_t a)> TagComponent_GetTagPtr {};
const std::string& TagComponent_GetTag(uint64_t a)
{
	return TagComponent_GetTagPtr(a);
}
static std::function<void(const std::string& a)> PlaySoundFromNamePtr {};
void PlaySoundFromName(const std::string& a)
{
	PlaySoundFromNamePtr(a);
}
static std::function<bool(uint16_t a)> IsKeyPressedPtr {};
bool IsKeyPressed(uint16_t a)
{
	return IsKeyPressedPtr(a);
}
static std::function<bool(const std::string& a)> Scenes_IsSceneActivePtr {};
bool Scenes_IsSceneActive(const std::string& a)
{
	return Scenes_IsSceneActivePtr(a);
}
static std::function<void(uint16_t a)> SignalAllPtr {};
void SignalAll(uint16_t a)
{
	SignalAllPtr(a);
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
static std::function<void*(const std::string& a)> GetGameStateFieldPtr {};
void* GetGameStateField(const std::string& a)
{
	return GetGameStateFieldPtr(a);
}
static std::function<void(const std::string& a)> PlayStereoSoundFromNamePtr {};
void PlayStereoSoundFromName(const std::string& a)
{
	PlayStereoSoundFromNamePtr(a);
}
static std::function<void(const std::string& a)> LoadInputModeByNamePtr {};
void LoadInputModeByName(const std::string& a)
{
	LoadInputModeByNamePtr(a);
}
static std::function<void(const std::string& a)> LoadUserInterfaceFromNamePtr {};
void LoadUserInterfaceFromName(const std::string& a)
{
	LoadUserInterfaceFromNamePtr(a);
}
static std::function<void(const std::string& a)> TransitionSceneFromNamePtr {};
void TransitionSceneFromName(const std::string& a)
{
	TransitionSceneFromNamePtr(a);
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
static std::function<uint64_t(const std::string& a)> FindEntityHandleByNamePtr {};
uint64_t FindEntityHandleByName(const std::string& a)
{
	return FindEntityHandleByNamePtr(a);
}
static std::function<bool(uint64_t a, const std::string& b)> CheckHasComponentPtr {};
bool CheckHasComponent(uint64_t a, const std::string& b)
{
	return CheckHasComponentPtr(a, b);
}
static std::function<bool(const std::string& a, const std::string& b)> RuntimeUI_IsWidgetSelectedPtr {};
bool RuntimeUI_IsWidgetSelected(const std::string& a, const std::string& b)
{
	return RuntimeUI_IsWidgetSelectedPtr(a, b);
}
static std::function<int32_t(int32_t a, int32_t b)> GenerateRandomNumberPtr {};
int32_t GenerateRandomNumber(int32_t a, int32_t b)
{
	return GenerateRandomNumberPtr(a, b);
}
static std::function<void(const std::string& a, bool b)> SetDisplayWindowPtr {};
void SetDisplayWindow(const std::string& a, bool b)
{
	SetDisplayWindowPtr(a, b);
}
static std::function<void(const std::string& a, const std::string& b)> SetSelectedWidgetPtr {};
void SetSelectedWidget(const std::string& a, const std::string& b)
{
	SetSelectedWidgetPtr(a, b);
}
static std::function<void(const std::string& a, void* b)> SetGameStateFieldPtr {};
void SetGameStateField(const std::string& a, void* b)
{
	SetGameStateFieldPtr(a, b);
}
static std::function<void(uint64_t a, Math::vec3 b)> SendAllEntityLocationPtr {};
void SendAllEntityLocation(uint64_t a, Math::vec3 b)
{
	SendAllEntityLocationPtr(a, b);
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
static std::function<void(const std::string& a, const std::string& b, bool c)> SetWidgetSelectablePtr {};
void SetWidgetSelectable(const std::string& a, const std::string& b, bool c)
{
	SetWidgetSelectablePtr(a, b, c);
}
static std::function<void(const std::string& a, const std::string& b, const std::string& c)> SetWidgetTextPtr {};
void SetWidgetText(const std::string& a, const std::string& b, const std::string& c)
{
	SetWidgetTextPtr(a, b, c);
}
static std::function<void(const std::string& a, const std::string& b, Math::vec4 c)> SetWidgetTextColorPtr {};
void SetWidgetTextColor(const std::string& a, const std::string& b, Math::vec4 c)
{
	SetWidgetTextColorPtr(a, b, c);
}
static std::function<void(const std::string& a, const std::string& b, Math::vec4 c)> SetWidgetBackgroundColorPtr {};
void SetWidgetBackgroundColor(const std::string& a, const std::string& b, Math::vec4 c)
{
	SetWidgetBackgroundColorPtr(a, b, c);
}
static std::function<void*(uint64_t a, uint64_t b, uint64_t c)> Scenes_GetProjectComponentFieldPtr {};
void* Scenes_GetProjectComponentField(uint64_t a, uint64_t b, uint64_t c)
{
	return Scenes_GetProjectComponentFieldPtr(a, b, c);
}
static std::function<void(uint64_t a, Math::vec3 b, Math::vec2 c)> SendAllEntityPhysicsPtr {};
void SendAllEntityPhysics(uint64_t a, Math::vec3 b, Math::vec2 c)
{
	SendAllEntityPhysicsPtr(a, b, c);
}
static std::function<void(uint64_t a, uint64_t b, uint64_t c,  void* d)> Scenes_SetProjectComponentFieldPtr {};
void Scenes_SetProjectComponentField(uint64_t a, uint64_t b, uint64_t c, void* d)
{
	Scenes_SetProjectComponentFieldPtr(a, b, c, d);
}
static std::function<void(uint32_t a, uint64_t b, uint64_t c,  float d)> AI_SendMessagePtr {};
void AI_SendMessage(uint32_t a, uint64_t b, uint64_t c, float d)
{
	AI_SendMessagePtr(a, b, c, d);
}
void AddVoidNone(const std::string& funcName, std::function<void()> funcPtr)
{
if (funcName == "EnableReadyCheck") { EnableReadyCheckPtr = funcPtr; return; }
if (funcName == "RequestUserCount") { RequestUserCountPtr = funcPtr; return; }
if (funcName == "RequestJoinSession") { RequestJoinSessionPtr = funcPtr; return; }
if (funcName == "LeaveCurrentSession") { LeaveCurrentSessionPtr = funcPtr; return; }
}
void AddVoidUInt16(const std::string& funcName, std::function<void(uint16_t)> funcPtr)
{
if (funcName == "SignalAll") { SignalAllPtr = funcPtr; return; }
}
void AddVoidString(const std::string& funcName, std::function<void(const std::string&)> funcPtr)
{
if (funcName == "Log") { LogPtr = funcPtr; return; }
if (funcName == "PlaySoundFromName") { PlaySoundFromNamePtr = funcPtr; return; }
if (funcName == "PlayStereoSoundFromName") { PlayStereoSoundFromNamePtr = funcPtr; return; }
if (funcName == "LoadInputModeByName") { LoadInputModeByNamePtr = funcPtr; return; }
if (funcName == "TransitionSceneFromName") { TransitionSceneFromNamePtr = funcPtr; return; }
if (funcName == "LoadUserInterfaceFromName") { LoadUserInterfaceFromNamePtr = funcPtr; return; }
}
void AddVoidUInt64(const std::string& funcName, std::function<void(uint64_t)> funcPtr)
{
if (funcName == "AI_RevertPreviousState") { AI_RevertPreviousStatePtr = funcPtr; return; }
if (funcName == "AI_ClearGlobalState") { AI_ClearGlobalStatePtr = funcPtr; return; }
if (funcName == "AI_ClearCurrentState") { AI_ClearCurrentStatePtr = funcPtr; return; }
if (funcName == "AI_ClearPreviousState") { AI_ClearPreviousStatePtr = funcPtr; return; }
if (funcName == "AI_ClearAllStates") { AI_ClearAllStatesPtr = funcPtr; return; }
}
void AddVoidUInt64UInt64(const std::string& funcName, std::function<void(uint64_t, uint64_t)> funcPtr)
{
if (funcName == "AI_ChangeGlobalState") { AI_ChangeGlobalStatePtr = funcPtr; return; }
if (funcName == "AI_ChangeCurrentState") { AI_ChangeCurrentStatePtr = funcPtr; return; }
}
void AddVoidStringBool(const std::string& funcName, std::function<void(const std::string&, bool)> funcPtr)
{
if (funcName == "SetDisplayWindow") { SetDisplayWindowPtr = funcPtr; return; }
}
void AddVoidStringVoidPtr(const std::string& funcName, std::function<void(const std::string&, void*)> funcPtr)
{
if (funcName == "SetGameStateField") { SetGameStateFieldPtr = funcPtr; return; }
}
void AddVoidStringString(const std::string& funcName, std::function<void(const std::string&, const std::string&)> funcPtr)
{
if (funcName == "SetSelectedWidget") { SetSelectedWidgetPtr = funcPtr; return; }
}
void AddVoidStringStringBool(const std::string& funcName, std::function<void(const std::string&, const std::string&, bool)> funcPtr)
{
if (funcName == "SetWidgetSelectable") { SetWidgetSelectablePtr = funcPtr; return; }
}
void AddVoidStringStringString(const std::string& funcName, std::function<void(const std::string&, const std::string&, const std::string&)> funcPtr)
{
if (funcName == "SetWidgetText") { SetWidgetTextPtr = funcPtr; return; }
}
void AddVoidStringStringVec4(const std::string& funcName, std::function<void(const std::string&, const std::string&, Math::vec4)> funcPtr)
{
if (funcName == "SetWidgetTextColor") { SetWidgetTextColorPtr = funcPtr; return; }
if (funcName == "SetWidgetBackgroundColor") { SetWidgetBackgroundColorPtr = funcPtr; return; }
}
void AddVoidUInt64Vec3(const std::string& funcName, std::function<void(uint64_t, Math::vec3)> funcPtr)
{
if (funcName == "SendAllEntityLocation") { SendAllEntityLocationPtr = funcPtr; return; }
if (funcName == "TransformComponent_SetTranslation") { TransformComponent_SetTranslationPtr = funcPtr; return; }
}
void AddVoidUInt64Vec2(const std::string& funcName, std::function<void(uint64_t, Math::vec2)> funcPtr)
{
if (funcName == "Rigidbody2DComponent_SetLinearVelocity") { Rigidbody2DComponent_SetLinearVelocityPtr = funcPtr; return; }
}
void AddBoolUInt64String(const std::string& funcName, std::function<bool(uint64_t, const std::string&)> funcPtr)
{
if (funcName == "CheckHasComponent") { CheckHasComponentPtr = funcPtr; return; }
}
void AddBoolStringString(const std::string& funcName, std::function<bool(const std::string&, const std::string&)> funcPtr)
{
if (funcName == "RuntimeUI_IsWidgetSelected") { RuntimeUI_IsWidgetSelectedPtr = funcPtr; return; }
}
void AddUInt16None(const std::string& funcName, std::function<uint16_t()> funcPtr)
{
if (funcName == "GetActiveSessionSlot") { GetActiveSessionSlotPtr = funcPtr; return; }
}
void AddVec3UInt64(const std::string& funcName, std::function<Math::vec3(uint64_t)> funcPtr)
{
if (funcName == "TransformComponent_GetTranslation") { TransformComponent_GetTranslationPtr = funcPtr; return; }
}
void AddVec2UInt64(const std::string& funcName, std::function<Math::vec2(uint64_t)> funcPtr)
{
if (funcName == "Rigidbody2DComponent_GetLinearVelocity") { Rigidbody2DComponent_GetLinearVelocityPtr = funcPtr; return; }
}
void AddUInt64String(const std::string& funcName, std::function<uint64_t(const std::string&)> funcPtr)
{
if (funcName == "FindEntityHandleByName") { FindEntityHandleByNamePtr = funcPtr; return; }
}
void AddVoidUInt64StringVoidPtr(const std::string& funcName, std::function<void(uint64_t, const std::string&, void*)> funcPtr)
{
}
void AddVoidUInt64Vec3Vec2(const std::string& funcName, std::function<void(uint64_t, Math::vec3, Math::vec2)> funcPtr)
{
if (funcName == "SendAllEntityPhysics") { SendAllEntityPhysicsPtr = funcPtr; return; }
}
void AddVoidPtrUInt64String(const std::string& funcName, std::function<void*(uint64_t, const std::string&)> funcPtr)
{
}
void AddVoidPtrString(const std::string& funcName, std::function<void*(const std::string&)> funcPtr)
{
if (funcName == "GetGameStateField") { GetGameStateFieldPtr = funcPtr; return; }
}
void AddInt32Int32Int32(const std::string& funcName, std::function<int32_t(int32_t, int32_t)> funcPtr)
{
if (funcName == "GenerateRandomNumber") { GenerateRandomNumberPtr = funcPtr; return; }
}
void AddBoolUInt16(const std::string& funcName, std::function<bool(uint16_t)> funcPtr)
{
if (funcName == "IsKeyPressed") { IsKeyPressedPtr = funcPtr; return; }
}
void AddBoolString(const std::string& funcName, std::function<bool(const std::string&)> funcPtr)
{
if (funcName == "Scenes_IsSceneActive") { Scenes_IsSceneActivePtr = funcPtr; return; }
}
void AddStringUInt64(const std::string& funcName, std::function<const std::string&(uint64_t)> funcPtr)
{
if (funcName == "TagComponent_GetTag") { TagComponent_GetTagPtr = funcPtr; return; }
}
void AddVoidPtrUInt64UInt64UInt64(const std::string& funcName, std::function<void*(uint64_t, uint64_t, uint64_t)> funcPtr)
{
if (funcName == "Scenes_GetProjectComponentField") { Scenes_GetProjectComponentFieldPtr = funcPtr; return; }
}
void AddVoidUInt64UInt64UInt64VoidPtr(const std::string& funcName, std::function<void(uint64_t, uint64_t, uint64_t, void*)> funcPtr)
{
if (funcName == "Scenes_SetProjectComponentField") { Scenes_SetProjectComponentFieldPtr = funcPtr; return; }
}
void AddVoidUInt32UInt64UInt64Float(const std::string& funcName, std::function<void(uint32_t, uint64_t, uint64_t, float)> funcPtr)
{
if (funcName == "AI_SendMessage") { AI_SendMessagePtr = funcPtr; return; }
}
void Player2MoveUp(float timeStep)
{
  uint64_t currentEntity = FindEntityHandleByName("Player2");
  Math::vec3 translation = TransformComponent_GetTranslation(currentEntity);
  bool upperLimit = translation.y >= 11.15f;
  bool lowerLimit = translation.y <= -11.15f;
  float speed = IsKeyPressed(Key::RightShift) ? *(float*)Scenes_GetProjectComponentField(currentEntity, 8506492999786783749, 0) * *(float*)Scenes_GetProjectComponentField(currentEntity, 8506492999786783749, 1) : *(float*)Scenes_GetProjectComponentField(currentEntity, 8506492999786783749, 0);
  Math::vec3 velocity = {0.0f, 0.0f, 0.0f};
  if (!upperLimit)
  {
    velocity.y = 1.0f;
  }
  velocity = velocity * speed * timeStep;
  TransformComponent_SetTranslation(currentEntity, TransformComponent_GetTranslation(currentEntity) + velocity);
}

void LeaveOnlineGameplay()
{
  LeaveCurrentSession();
  OpenMainMenu();
}

void UpdateSessionUserSlot(uint16_t userSlot)
{
  std::string selectedWidget = "player_slot_" + std::to_string(userSlot);
  SetWidgetText("online_lobby", selectedWidget, "Connected!");
}

void UpdateOnlineCount(uint32_t count)
{
  std::string onlineCount = "Online: " + std::to_string(count);
  SetWidgetText("main_window", "online_count", onlineCount);
  SetWidgetSelectable("main_window", "online_multiplayer", true);
  SetWidgetTextColor("main_window", "online_multiplayer", {1.0f, 1.0f, 1.0f, 1.0f});
  SetWidgetBackgroundColor("main_window", "online_multiplayer", {103.0f / 255.0f, 17.0f / 255.0f, 175.0f / 255.0f, 54.0f / 255.0f});
}

void Player2MoveDown(float timeStep)
{
  uint64_t currentEntity = FindEntityHandleByName("Player2");
  Math::vec3 translation = TransformComponent_GetTranslation(currentEntity);
  bool upperLimit = translation.y >= 11.15;
  bool lowerLimit = translation.y <= -11.15;
  float speed = IsKeyPressed(Key::RightShift) ? *(float*)Scenes_GetProjectComponentField(currentEntity, 8506492999786783749, 0) * *(float*)Scenes_GetProjectComponentField(currentEntity, 8506492999786783749, 1) : *(float*)Scenes_GetProjectComponentField(currentEntity, 8506492999786783749, 0);
  Math::vec3 velocity = {0.0f, 0.0f, 0.0f};
  if (!lowerLimit)
  {
    velocity.y = -1.0f;
  }
  velocity = velocity * speed * timeStep;
  TransformComponent_SetTranslation(currentEntity, TransformComponent_GetTranslation(currentEntity) + velocity);
}

void UserLeftSession(uint16_t userSlot)
{
  std::string selectedWidget = "player_slot_" + std::to_string(userSlot);
  std::string newText = "No Player " + std::to_string(userSlot + 1);
  SetWidgetText("online_lobby", selectedWidget, newText);
  SetWidgetText("online_lobby", "main_text", "Waiting for Players...");
}

void OnCurrentSessionInit()
{
  SetWidgetText("online_lobby", "main_text", "Starting Session...");
}

void ApproveJoinSession(uint16_t userSlot)
{
  uint16_t direction = 0;
  SetGameStateField("BallDirection", &direction);
  LoadUserInterfaceFromName("UserInterface/RuntimeUI.kgui");
  SetDisplayWindow("online_lobby", true);
  SetDisplayWindow("base_window", false);
  TransitionSceneFromName("Scenes/main_gameplay.kgscene");
  LoadInputModeByName("Input/Online_Lobby_Input.kginput");
  PlaySoundFromName("Audio/menu_confirm.wav");
  PlayStereoSoundFromName("Audio/greenA.wav");
  std::string selectedWidget = "player_slot_" + std::to_string(userSlot);
  SetWidgetText("online_lobby", selectedWidget, "Connected!");
}

void OnStartSession()
{
  uint16_t userSlot = GetActiveSessionSlot();
  SetDisplayWindow("pre_game_warning", true);
  SetDisplayWindow("base_window", false);
  SetDisplayWindow("online_lobby", false);
  LoadInputModeByName("Input/Online_Pre_Start.kginput");
  PlaySoundFromName("Audio/menu_confirm.wav");
  if (userSlot == 0)
  {
    SetWidgetText("pre_game_warning", "controls_2", "");
  }
  else if (userSlot == 1)
  {
    SetWidgetText("pre_game_warning", "controls_1", "");
  }
  EnableReadyCheck();
}

void Player1MoveUp(float timeStep)
{
  uint64_t currentEntity = FindEntityHandleByName("Player1");
  Math::vec3 translation = TransformComponent_GetTranslation(currentEntity);
  bool upperLimit = translation.y >= 11.15f;
  bool lowerLimit = translation.y <= -11.15f;
  float speed = IsKeyPressed(Key::LeftShift) ? *(float*)Scenes_GetProjectComponentField(currentEntity, 8506492999786783749, 0) * *(float*)Scenes_GetProjectComponentField(currentEntity, 8506492999786783749, 1) : *(float*)Scenes_GetProjectComponentField(currentEntity, 8506492999786783749, 0);
  Math::vec3 velocity = {0.0f, 0.0f, 0.0f};
  if (!upperLimit)
  {
    velocity.y = 1.0f;
  }
  velocity = velocity * speed * timeStep;
  TransformComponent_SetTranslation(currentEntity, TransformComponent_GetTranslation(currentEntity) + velocity);
}

void OpenMainMenu()
{
  LoadUserInterfaceFromName("UserInterface/Main Menu.kgui");
  TransitionSceneFromName("Scenes/main_menu.kgscene");
  LoadInputModeByName("Input/MainMenu.kginput");
  PlayStereoSoundFromName("Audio/blueA.wav");
  RequestUserCount();
}

void OpenPongGameplay()
{
  LoadUserInterfaceFromName("UserInterface/RuntimeUI.kgui");
  SetDisplayWindow("pre_game_warning", true);
  SetDisplayWindow("base_window", false);
  TransitionSceneFromName("Scenes/main_gameplay.kgscene");
  LoadInputModeByName("Input/Pre_Start.kginput");
  PlaySoundFromName("Audio/menu_confirm.wav");
  PlayStereoSoundFromName("Audio/greenA.wav");
}

void OnConnectionTerminated()
{
  if (Scenes_IsSceneActive("Scenes/main_menu.kgscene"))
  {
    if (RuntimeUI_IsWidgetSelected("main_window", "online_multiplayer"))
    {
      SetSelectedWidget("main_window", "single_player");
    }
    SetWidgetText("main_window", "online_count", "Offline");
    SetWidgetSelectable("main_window", "online_multiplayer", false);
    SetWidgetTextColor("main_window", "online_multiplayer", {1.0f, 1.0f, 1.0f, 222.0f / 255.0f});
    SetWidgetBackgroundColor("main_window", "online_multiplayer", {30.0f / 255.0f, 30.0f / 255.0f, 30.0f / 255.0f, 37.0f / 255.0f});
  }
}

void Player1OnCreate(uint64_t currentEntity)
{
  CheckHasComponent(currentEntity, "TransformComponent");
  CheckHasComponent(currentEntity, "Rigidbody2DComponent");
}

void Player1MoveDown(float timeStep)
{
  uint64_t currentEntity = FindEntityHandleByName("Player1");
  Math::vec3 translation = TransformComponent_GetTranslation(currentEntity);
  bool upperLimit = translation.y >= 11.15;
  bool lowerLimit = translation.y <= -11.15;
  float speed = IsKeyPressed(Key::LeftShift) ? *(float*)Scenes_GetProjectComponentField(currentEntity, 8506492999786783749, 0) * *(float*)Scenes_GetProjectComponentField(currentEntity, 8506492999786783749, 1) : *(float*)Scenes_GetProjectComponentField(currentEntity, 8506492999786783749, 0);
  Math::vec3 velocity = {0.0f, 0.0f, 0.0f};
  if (!lowerLimit)
  {
    velocity.y = -1.0f;
  }
  velocity = velocity * speed * timeStep;
  TransformComponent_SetTranslation(currentEntity, TransformComponent_GetTranslation(currentEntity) + velocity);
}

void Player2OnCreate(uint64_t currentEntity)
{
  CheckHasComponent(currentEntity, "TransformComponent");
  CheckHasComponent(currentEntity, "Rigidbody2DComponent");
}

void Player1OnUpdate(uint64_t currentEntity, float deltaTime)
{
  uint16_t userSlot = GetActiveSessionSlot();
  if (userSlot == 0)
  {
    SendAllEntityLocation(currentEntity, TransformComponent_GetTranslation(currentEntity));
  }
}

void Player2OnUpdate(uint64_t currentEntity, float deltaTime)
{
  uint16_t userSlot = GetActiveSessionSlot();
  if (userSlot == 1)
  {
    SendAllEntityLocation(currentEntity, TransformComponent_GetTranslation(currentEntity));
  }
}

void BallOnCreate(uint64_t currentEntity)
{
  CheckHasComponent(currentEntity, "TransformComponent");
  CheckHasComponent(currentEntity, "Rigidbody2DComponent");
}

bool BallOfflineCollision(uint64_t currentEntity, uint64_t otherEntity)
{
  bool collisionHandled = false;
  std::string otherEntityTag = TagComponent_GetTag(otherEntity);
  if (otherEntityTag == "Left Wall")
  {
    SetGameStateField("PlayerTwoScore", (void*)&RValueToLValue(*(uint16_t*)GetGameStateField("PlayerTwoScore") + 1));
    SetWidgetText("base_window", "score_player_2", std::to_string(*(uint16_t*)GetGameStateField("PlayerTwoScore")));
    Rigidbody2DComponent_SetLinearVelocity(currentEntity, {0.0f, 0.0f});
    PlaySoundFromName("Audio/lose_sound.wav");
    if (Scenes_IsSceneActive("Scenes/main_gameplay.kgscene"))
    {
      SetDisplayWindow("pre_game_warning", true);
    }
    else
    {
      SetDisplayWindow("pre_game_level_warning", true);
      uint64_t player2 = FindEntityHandleByName("Player2");
      AI_ClearAllStates(player2);
    }
    LoadInputModeByName("Input/Pre_Start.kginput");
    collisionHandled = true;
  }
  else if (otherEntityTag == "Right Wall")
  {
    SetGameStateField("PlayerOneScore", (void*)&RValueToLValue(*(uint16_t*)GetGameStateField("PlayerOneScore") + 1));
    SetWidgetText("base_window", "score_player_1", std::to_string(*(uint16_t*)GetGameStateField("PlayerOneScore")));
    Rigidbody2DComponent_SetLinearVelocity(currentEntity, {0.0f, 0.0f});
    PlaySoundFromName("Audio/lose_sound.wav");
    if (Scenes_IsSceneActive("Scenes/main_gameplay.kgscene"))
    {
      SetDisplayWindow("pre_game_warning", true);
    }
    else
    {
      SetDisplayWindow("pre_game_level_warning", true);
      uint64_t player2 = FindEntityHandleByName("Player2");
      AI_ClearAllStates(player2);
    }
    LoadInputModeByName("Input/Pre_Start.kginput");
    collisionHandled = true;
  }
  else if (otherEntityTag == "Top Wall" || otherEntityTag == "Bottom Wall")
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
    currentVelocity = glm::normalize(glm::normalize(currentVelocity) + horizontalDirection * 0.1f) * *(float*)Scenes_GetProjectComponentField(currentEntity, 8506492999786783749, 0);
    Rigidbody2DComponent_SetLinearVelocity(currentEntity, currentVelocity);
    PlaySoundFromName("Audio/pop-sound.wav");
    collisionHandled = true;
  }
  else if (otherEntityTag == "Player1")
  {
    if (IsKeyPressed(Key::W))
    {
      float deflectionFactor = IsKeyPressed(Key::LeftShift) ? 0.55f : 0.33f;
      Math::vec2 up = {0.0f, 1.0f};
      Math::vec2 currentVelocity = Rigidbody2DComponent_GetLinearVelocity(currentEntity);
      currentVelocity = glm::normalize(glm::normalize(currentVelocity) + up * deflectionFactor) * *(float*)Scenes_GetProjectComponentField(currentEntity, 8506492999786783749, 0);
      Rigidbody2DComponent_SetLinearVelocity(currentEntity, currentVelocity);
    }
    if (IsKeyPressed(Key::A))
    {
      float deflectionFactor = IsKeyPressed(Key::LeftShift) ? 0.55f : 0.33f;
      Math::vec2 up = {0.0f, -1.0f};
      Math::vec2 currentVelocity = Rigidbody2DComponent_GetLinearVelocity(currentEntity);
      currentVelocity = glm::normalize(glm::normalize(currentVelocity) + up * deflectionFactor) * *(float*)Scenes_GetProjectComponentField(currentEntity, 8506492999786783749, 0);
      Rigidbody2DComponent_SetLinearVelocity(currentEntity, currentVelocity);
    }
    PlaySoundFromName("Audio/pop-sound.wav");
    collisionHandled = true;
  }
  else if (otherEntityTag == "Player2")
  {
    if (Scenes_IsSceneActive("Scenes/main_gameplay.kgscene"))
    {
      if (IsKeyPressed(Key::O))
      {
        float deflectionFactor = IsKeyPressed(Key::RightShift) ? 0.55f : 0.33f;
        Math::vec2 up = {0.0f, 1.0f};
        Math::vec2 currentVelocity = Rigidbody2DComponent_GetLinearVelocity(currentEntity);
        currentVelocity = glm::normalize(glm::normalize(currentVelocity) + up * deflectionFactor) * *(float*)Scenes_GetProjectComponentField(currentEntity, 8506492999786783749, 0);
        Rigidbody2DComponent_SetLinearVelocity(currentEntity, currentVelocity);
      }
      if (IsKeyPressed(Key::Semicolon))
      {
        float deflectionFactor = IsKeyPressed(Key::RightShift) ? 0.55f : 0.33f;
        Math::vec2 up = {0.0f, -1.0f};
        Math::vec2 currentVelocity = Rigidbody2DComponent_GetLinearVelocity(currentEntity);
        currentVelocity = glm::normalize(glm::normalize(currentVelocity) + up * deflectionFactor) * *(float*)Scenes_GetProjectComponentField(currentEntity, 8506492999786783749, 0);
        Rigidbody2DComponent_SetLinearVelocity(currentEntity, currentVelocity);
      }
    }
    else
    {
      float deflectionFactor = 0.33f;
      Math::vec2 currentVelocity = Rigidbody2DComponent_GetLinearVelocity(currentEntity);
      currentVelocity = glm::normalize(glm::normalize(currentVelocity) * deflectionFactor) * *(float*)Scenes_GetProjectComponentField(currentEntity, 8506492999786783749, 0);
      Rigidbody2DComponent_SetLinearVelocity(currentEntity, currentVelocity);
    }
    PlaySoundFromName("Audio/pop-sound.wav");
    collisionHandled = true;
  }
  return collisionHandled;
}

void OnReceiveSignal(uint16_t signalNum)
{
  uint16_t userSlot = GetActiveSessionSlot();
  if (signalNum == 1)
  {
    uint64_t ball = FindEntityHandleByName("Ball");
    if (userSlot == 0)
    {
      SetGameStateField("PlayerOneScore", (void*)&RValueToLValue(*(uint16_t*)GetGameStateField("PlayerOneScore") + 1));
      SetWidgetText("base_window", "score_player_1", std::to_string(*(uint16_t*)GetGameStateField("PlayerOneScore")));
    }
    else if (userSlot == 1)
    {
      SetGameStateField("PlayerTwoScore", (void*)&RValueToLValue(*(uint16_t*)GetGameStateField("PlayerTwoScore") + 1));
      SetWidgetText("base_window", "score_player_2", std::to_string(*(uint16_t*)GetGameStateField("PlayerTwoScore")));
    }
    Rigidbody2DComponent_SetLinearVelocity(ball, {0.0f, 0.0f});
    PlaySoundFromName("Audio/lose_sound.wav");
    SetDisplayWindow("pre_game_warning", true);
    LoadInputModeByName("Input/Online_Pre_Start.kginput");
    EnableReadyCheck();
  }
}

void StartOnlineGame()
{
  uint16_t userSlot = GetActiveSessionSlot();
  if (userSlot == 0)
  {
    LoadInputModeByName("Input/Online_Player1_Runtime.kginput");
  }
  else if (userSlot == 1)
  {
    LoadInputModeByName("Input/Online_Player2_Runtime.kginput");
  }
  SetDisplayWindow("pre_game_warning", false);
  SetDisplayWindow("online_lobby", false);
  SetDisplayWindow("base_window", true);
  uint64_t player1 = FindEntityHandleByName("Player1");
  TransformComponent_SetTranslation(player1, *(Math::vec3*)Scenes_GetProjectComponentField(player1, 2736904612472256316, 0));
  uint64_t player2 = FindEntityHandleByName("Player2");
  TransformComponent_SetTranslation(player2, *(Math::vec3*)Scenes_GetProjectComponentField(player2, 2736904612472256316, 0));
  uint64_t ball = FindEntityHandleByName("Ball");
  TransformComponent_SetTranslation(ball, *(Math::vec3*)Scenes_GetProjectComponentField(ball, 2736904612472256316, 0));
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
  Rigidbody2DComponent_SetLinearVelocity(ball, velocity * *(float*)Scenes_GetProjectComponentField(ball, 8506492999786783749, 0));
}

bool BallOnlineCollision(uint64_t currentEntity, uint16_t userSlot, uint64_t otherEntity)
{
  bool collisionHandled = false;
  std::string otherEntityTag = TagComponent_GetTag(otherEntity);
  if (otherEntityTag == "Left Wall")
  {
    if (userSlot == 0)
    {
      SetGameStateField("PlayerTwoScore", (void*)&RValueToLValue(*(uint16_t*)GetGameStateField("PlayerTwoScore") + 1));
      SetWidgetText("base_window", "score_player_2", std::to_string(*(uint16_t*)GetGameStateField("PlayerTwoScore")));
      Rigidbody2DComponent_SetLinearVelocity(currentEntity, {0.0f, 0.0f});
      PlaySoundFromName("Audio/lose_sound.wav");
      SetDisplayWindow("pre_game_warning", true);
      LoadInputModeByName("Input/Online_Pre_Start.kginput");
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
      SetGameStateField("PlayerOneScore", (void*)&RValueToLValue(*(uint16_t*)GetGameStateField("PlayerOneScore") + 1));
      SetWidgetText("base_window", "score_player_1", std::to_string(*(uint16_t*)GetGameStateField("PlayerOneScore")));
      Rigidbody2DComponent_SetLinearVelocity(currentEntity, {0.0f, 0.0f});
      PlaySoundFromName("Audio/lose_sound.wav");
      SetDisplayWindow("pre_game_warning", true);
      LoadInputModeByName("Input/Online_Pre_Start.kginput");
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
    currentVelocity = glm::normalize(glm::normalize(currentVelocity) + horizontalDirection * 0.1f) * *(float*)Scenes_GetProjectComponentField(currentEntity, 8506492999786783749, 0);
    Rigidbody2DComponent_SetLinearVelocity(currentEntity, currentVelocity);
    PlaySoundFromName("Audio/pop-sound.wav");
    collisionHandled = true;
  }
  else if (otherEntityTag == "Player1")
  {
    if (userSlot == 0)
    {
      if (IsKeyPressed(Key::W))
      {
        float deflectionFactor = IsKeyPressed(Key::LeftShift) ? 0.55f : 0.33f;
        Math::vec2 up = {0.0f, 1.0f};
        Math::vec2 currentVelocity = Rigidbody2DComponent_GetLinearVelocity(currentEntity);
        currentVelocity = glm::normalize(glm::normalize(currentVelocity) + up * deflectionFactor) * *(float*)Scenes_GetProjectComponentField(currentEntity, 8506492999786783749, 0);
        Rigidbody2DComponent_SetLinearVelocity(currentEntity, currentVelocity);
      }
      if (IsKeyPressed(Key::A))
      {
        float deflectionFactor = IsKeyPressed(Key::LeftShift) ? 0.55f : 0.33f;
        Math::vec2 up = {0.0f, -1.0f};
        Math::vec2 currentVelocity = Rigidbody2DComponent_GetLinearVelocity(currentEntity);
        currentVelocity = glm::normalize(glm::normalize(currentVelocity) + up * deflectionFactor) * *(float*)Scenes_GetProjectComponentField(currentEntity, 8506492999786783749, 0);
        Rigidbody2DComponent_SetLinearVelocity(currentEntity, currentVelocity);
      }
    }
    PlaySoundFromName("Audio/pop-sound.wav");
    collisionHandled = true;
  }
  else if (otherEntityTag == "Player2")
  {
    if (userSlot == 1)
    {
      if (IsKeyPressed(Key::O))
      {
        float deflectionFactor = IsKeyPressed(Key::RightShift) ? 0.55f : 0.33f;
        Math::vec2 up = {0.0f, 1.0f};
        Math::vec2 currentVelocity = Rigidbody2DComponent_GetLinearVelocity(currentEntity);
        currentVelocity = glm::normalize(glm::normalize(currentVelocity) + up * deflectionFactor) * *(float*)Scenes_GetProjectComponentField(currentEntity, 8506492999786783749, 0);
        Rigidbody2DComponent_SetLinearVelocity(currentEntity, currentVelocity);
      }
      if (IsKeyPressed(Key::Semicolon))
      {
        float deflectionFactor = IsKeyPressed(Key::RightShift) ? 0.55f : 0.33f;
        Math::vec2 up = {0.0f, -1.0f};
        Math::vec2 currentVelocity = Rigidbody2DComponent_GetLinearVelocity(currentEntity);
        currentVelocity = glm::normalize(glm::normalize(currentVelocity) + up * deflectionFactor) * *(float*)Scenes_GetProjectComponentField(currentEntity, 8506492999786783749, 0);
        Rigidbody2DComponent_SetLinearVelocity(currentEntity, currentVelocity);
      }
    }
    PlaySoundFromName("Audio/pop-sound.wav");
    collisionHandled = true;
  }
  return collisionHandled;
}

bool BallOnPhysicsCollision(uint64_t currentEntity, uint64_t otherEntity)
{
  uint16_t userSlot = GetActiveSessionSlot();
  if (userSlot == std::numeric_limits<uint16_t>().max())
  {
    return BallOfflineCollision(currentEntity, otherEntity);
  }
  else
  {
    return BallOnlineCollision(currentEntity, userSlot, otherEntity);
  }
}

void PlayMenuSelect()
{
  PlaySoundFromName("Audio/menu_select.wav");
}

bool BallOnPhysicsCollisionEnd(uint64_t currentEntity, uint64_t otherEntity)
{
  uint16_t userSlot = GetActiveSessionSlot();
  if (userSlot == std::numeric_limits<uint16_t>().max())
  {
    return false;
  }
  bool collisionHandled = false;
  std::string otherEntityTag = TagComponent_GetTag(otherEntity);
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

void StartGame()
{
  uint64_t player1 = FindEntityHandleByName("Player1");
  uint64_t player2 = FindEntityHandleByName("Player2");
  if (Scenes_IsSceneActive("Scenes/main_gameplay.kgscene"))
  {
    SetDisplayWindow("pre_game_warning", false);
    LoadInputModeByName("Input/Runtime.kginput");
  }
  else
  {
    SetDisplayWindow("pre_game_level_warning", false);
    LoadInputModeByName("RuntimeSinglePlayer.kginput");
    AI_ChangeCurrentState(player2, 13505644385975373738);
  }
  SetDisplayWindow("online_lobby", false);
  SetDisplayWindow("base_window", true);
  TransformComponent_SetTranslation(player1, *(Math::vec3*)Scenes_GetProjectComponentField(player1, 2736904612472256316, 0));
  TransformComponent_SetTranslation(player2, *(Math::vec3*)Scenes_GetProjectComponentField(player2, 2736904612472256316, 0));
  uint64_t ball = FindEntityHandleByName("Ball");
  TransformComponent_SetTranslation(ball, *(Math::vec3*)Scenes_GetProjectComponentField(ball, 2736904612472256316, 0));
  int32_t directionChoice = GenerateRandomNumber(0, 1);
  Math::vec2 velocity = {0.0f, 0.0f};
  if (directionChoice == 0)
  {
    velocity.x = -1.0f;
  }
  else
  {
    velocity.x = 1.0f;
  }
  Rigidbody2DComponent_SetLinearVelocity(ball, velocity * *(float*)Scenes_GetProjectComponentField(ball, 8506492999786783749, 0));
}

void OpenLevel1()
{
  LoadUserInterfaceFromName("UserInterface/RuntimeUI.kgui");
  SetDisplayWindow("pre_game_level_warning", true);
  SetDisplayWindow("base_window", false);
  TransitionSceneFromName("Scenes/level_1.kgscene");
  LoadInputModeByName("Input/Pre_Start.kginput");
  PlaySoundFromName("Audio/menu_confirm.wav");
  PlayStereoSoundFromName("Audio/greenA.wav");
}

void SeekBallOnUpdate(uint64_t aiEntity, float deltaTime)
{
  uint64_t ballEntity = FindEntityHandleByName("Ball");
  Math::vec3 ballLocation = TransformComponent_GetTranslation(ballEntity);
  Math::vec3 aiLocation = TransformComponent_GetTranslation(aiEntity);
  float distance = ballLocation.y - aiLocation.y;
  distance = distance < 0.0f ? distance * -1.0f : distance;
  if (distance < 0.1f)
  {
    Log("We earlied out mangggggg");
    return;
  }
  if (ballLocation.y > aiLocation.y)
  {
    Log("We moving up mangggggg");
    Player2MoveUp(deltaTime);
  }
  else
  {
    Log("We moving down mangggggg");
    Player2MoveDown(deltaTime);
  }
}

}
