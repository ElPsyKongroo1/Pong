#pragma once
#ifdef KARGONO_EXPORTS
#define KARGONO_API __declspec(dllexport)
#else
#define KARGONO_API __declspec(dllimport)
#endif
#include <functional>
#include <string>
#include <sstream>
#include <limits>
#include "Kargono/Math/MathAliases.h"
#include "Modules/Physics2D/Physics2DCommon.h"
#include "Modules/RuntimeUI/RuntimeUICommon.h"
#include "Kargono/Core/UUID.h"
template<typename T>
T& RValueToLValue(T && value)
{
return value;
}
namespace Kargono
{
extern "C"
	{
KARGONO_API void AddVoidNone(std::string_view funcName, std::function<void()> funcPtr);
KARGONO_API void AddVoidString(std::string_view funcName, std::function<void(std::string_view)> funcPtr);
KARGONO_API void AddVoidUInt16(std::string_view funcName, std::function<void(uint16_t)> funcPtr);
KARGONO_API void AddVoidUInt64(std::string_view funcName, std::function<void(uint64_t)> funcPtr);
KARGONO_API void AddVoidUInt64UInt64(std::string_view funcName, std::function<void(uint64_t, uint64_t)> funcPtr);
KARGONO_API void AddVoidVec3(std::string_view funcName, std::function<void(Math::vec3)> funcPtr);
KARGONO_API void AddVoidUInt32UInt32(std::string_view funcName, std::function<void(uint32_t, uint32_t)> funcPtr);
KARGONO_API void AddVoidVec3Float(std::string_view funcName, std::function<void(Math::vec3, float)> funcPtr);
KARGONO_API void AddVoidVec3Vec3(std::string_view funcName, std::function<void(Math::vec3, Math::vec3)> funcPtr);
KARGONO_API void AddVoidStringBool(std::string_view funcName, std::function<void(std::string_view, bool)> funcPtr);
KARGONO_API void AddVoidUInt16Bool(std::string_view funcName, std::function<void(uint16_t, bool)> funcPtr);
KARGONO_API void AddVoidStringVoidPtr(std::string_view funcName, std::function<void(std::string_view, void*)> funcPtr);
KARGONO_API void AddVoidStringString(std::string_view funcName, std::function<void(std::string_view, std::string_view)> funcPtr);
KARGONO_API void AddVoidStringStringBool(std::string_view funcName, std::function<void(std::string_view, std::string_view, bool)> funcPtr);
KARGONO_API void AddVoidStringStringString(std::string_view funcName, std::function<void(std::string_view, std::string_view, std::string_view)> funcPtr);
KARGONO_API void AddVoidStringStringVec4(std::string_view funcName, std::function<void(std::string_view, std::string_view, Math::vec4)> funcPtr);
KARGONO_API void AddVoidUInt16UInt16Vec4(std::string_view funcName, std::function<void(uint16_t, uint16_t, Math::vec4)> funcPtr);
KARGONO_API void AddVoidUInt16UInt16Bool(std::string_view funcName, std::function<void(uint16_t, uint16_t, bool)> funcPtr);
KARGONO_API void AddVoidUIWidgetString(std::string_view funcName, std::function<void(RuntimeUI::WidgetHandle, std::string_view)> funcPtr);
KARGONO_API void AddVoidUInt64StringVoidPtr(std::string_view funcName, std::function<void(uint64_t, std::string_view, void*)> funcPtr);
KARGONO_API void AddVoidPtrUInt64UInt64UInt64(std::string_view funcName, std::function<void*(uint64_t, uint64_t, uint64_t)> funcPtr);
KARGONO_API void AddVoidUInt64UInt64UInt64VoidPtr(std::string_view funcName, std::function<void(uint64_t, uint64_t, uint64_t, void*)> funcPtr);
KARGONO_API void AddVoidUInt32UInt64UInt64Float(std::string_view funcName, std::function<void(uint32_t, uint64_t, uint64_t, float)> funcPtr);
KARGONO_API void AddVoidUInt16UInt16(std::string_view funcName, std::function<void(uint16_t, uint16_t)> funcPtr);
KARGONO_API void AddVoidUInt16UInt16String(std::string_view funcName, std::function<void(uint16_t, uint16_t, std::string_view)> funcPtr);
KARGONO_API void AddVoidPtrString(std::string_view funcName, std::function<void*(std::string_view)> funcPtr);
KARGONO_API void AddVoidPtrUInt64String(std::string_view funcName, std::function<void*(uint64_t, std::string_view)> funcPtr);
KARGONO_API void AddVoidUInt64Vec3(std::string_view funcName, std::function<void(uint64_t, Math::vec3)> funcPtr);
KARGONO_API void AddVoidUInt64Vec2(std::string_view funcName, std::function<void(uint64_t, Math::vec2)> funcPtr);
KARGONO_API void AddVoidUInt64Vec3Vec2(std::string_view funcName, std::function<void(uint64_t, Math::vec3, Math::vec2)> funcPtr);
KARGONO_API void AddVoidUIWidgetString(std::string_view funcName, std::function<void(RuntimeUI::WidgetHandle, std::string_view)> funcPtr);
KARGONO_API void AddVoidUIWindowBool(std::string_view funcName, std::function<void(RuntimeUI::WindowHandle, bool)> funcPtr);
KARGONO_API void AddVoidUIWidgetBool(std::string_view funcName, std::function<void(RuntimeUI::WidgetHandle, bool)> funcPtr);
KARGONO_API void AddVoidUIWidget(std::string_view funcName, std::function<void(RuntimeUI::WidgetHandle)> funcPtr);
KARGONO_API void AddVoidUIWidgetVec4(std::string_view funcName, std::function<void(RuntimeUI::WidgetHandle, Math::vec4)> funcPtr);
KARGONO_API void AddVoidUIWidgetUInt64(std::string_view funcName, std::function<void(RuntimeUI::WidgetHandle, uint64_t)> funcPtr);
KARGONO_API void AddBoolUIWidget(std::string_view funcName, std::function<bool(RuntimeUI::WidgetHandle)> funcPtr);
KARGONO_API void AddBoolStringString(std::string_view funcName, std::function<bool(std::string_view, std::string_view)> funcPtr);
KARGONO_API void AddBoolUInt64String(std::string_view funcName, std::function<bool(uint64_t, std::string_view)> funcPtr);
KARGONO_API void AddBoolUInt64UInt64(std::string_view funcName, std::function<bool(uint64_t, uint64_t)> funcPtr);
KARGONO_API void AddBoolUInt16(std::string_view funcName, std::function<bool(uint16_t)> funcPtr);
KARGONO_API void AddBoolUInt16UInt16(std::string_view funcName, std::function<bool(uint16_t, uint16_t)> funcPtr);
KARGONO_API void AddBoolUInt64(std::string_view funcName, std::function<bool(uint64_t)> funcPtr);
KARGONO_API void AddBoolString(std::string_view funcName, std::function<bool(std::string_view)> funcPtr);
KARGONO_API void AddUInt16None(std::string_view funcName, std::function<uint16_t()> funcPtr);
KARGONO_API void AddUInt64String(std::string_view funcName, std::function<uint64_t(std::string_view)> funcPtr);
KARGONO_API void AddInt32Int32Int32(std::string_view funcName, std::function<int32_t(int32_t, int32_t)> funcPtr);
KARGONO_API void AddFloatFloatFloat(std::string_view funcName, std::function<float(float, float)> funcPtr);
KARGONO_API void AddVec2UInt64(std::string_view funcName, std::function<Math::vec2(uint64_t)> funcPtr);
KARGONO_API void AddVec3UInt64(std::string_view funcName, std::function<Math::vec3(uint64_t)> funcPtr);
KARGONO_API void AddStringUInt64(std::string_view funcName, std::function<std::string_view(uint64_t)> funcPtr);
KARGONO_API void AddStringUIWidget(std::string_view funcName, std::function<std::string_view(RuntimeUI::WidgetHandle)> funcPtr);
KARGONO_API void AddRaycastResultVec2Vec2(std::string_view funcName, std::function<Physics::RaycastResult(Math::vec2, Math::vec2)> funcPtr);
		KARGONO_API void OpenNewSinglePlayer();
		KARGONO_API void RequestUserCount();
		KARGONO_API void SeekLocationOnUpdate(uint64_t parameter1,float parameter2);
		KARGONO_API void SessionReadyCheck();
		KARGONO_API void CloseApplication();
		KARGONO_API void LeaveOnlineGameplay();
		KARGONO_API void HumanPlayer2MoveUp(float parameter1);
		KARGONO_API void OnPress();
		KARGONO_API void MoveRight();
		KARGONO_API void MoveLeft();
		KARGONO_API void MoveDown();
		KARGONO_API void RequestJoinSession();
		KARGONO_API void MoveUp();
		KARGONO_API void UpdateSessionUserSlot(uint16_t parameter1);
		KARGONO_API void OpenLocalMultiplayer();
		KARGONO_API void UpdateOnlineCount(uint32_t parameter1);
		KARGONO_API void OpenLevel3();
		KARGONO_API void UserLeftSession(uint16_t parameter1);
		KARGONO_API void CollidePlayer1(uint64_t parameter1);
		KARGONO_API void OnCurrentSessionInit();
		KARGONO_API void ApproveJoinSession(uint16_t parameter1);
		KARGONO_API void OnStartSession();
		KARGONO_API void OpenMainMenu();
		KARGONO_API void HumanPlayer2MoveDown(float parameter1);
		KARGONO_API void TopAndBottomWallCollision(uint64_t parameter1);
		KARGONO_API void OnConnectionTerminated();
		KARGONO_API void CollideLeftWall(uint64_t parameter1);
		KARGONO_API void AdvanceLevel();
		KARGONO_API void TestSelectOption(const std::string& parameter1);
		KARGONO_API void OnReceiveSignal(uint16_t parameter1);
		KARGONO_API void StartOnlineGame();
		KARGONO_API void PlayMenuSelect();
		KARGONO_API void SeekBottomOnUpdate(uint64_t parameter1,float parameter2);
		KARGONO_API void StartGame();
		KARGONO_API void OpenLevel1();
		KARGONO_API void SeekBallOnUpdate(uint64_t parameter1,float parameter2);
		KARGONO_API void DeflectBallOnUpdate(uint64_t parameter1,float parameter2);
		KARGONO_API void HumanPlayer1MoveDown(float parameter1);
		KARGONO_API void Player2UpdateNetwork(uint64_t parameter1,float parameter2);
		KARGONO_API void Player1UpdateNetwork(uint64_t parameter1,float parameter2);
		KARGONO_API void OnlinePlayer2MoveDown(float parameter1);
		KARGONO_API void OnMoveCursor();
		KARGONO_API bool BallOnlineCollisionStart(uint64_t parameter1,uint64_t parameter2);
		KARGONO_API void OpenGit();
		KARGONO_API bool BallOnlineCollisionEnd(uint64_t parameter1,uint64_t parameter2);
		KARGONO_API bool BallSinglePlayerCollisionStart(uint64_t parameter1,uint64_t parameter2);
		KARGONO_API void CollidePlayer2(uint64_t parameter1);
		KARGONO_API void SeekTopOnUpdate(uint64_t parameter1,float parameter2);
		KARGONO_API bool BallSinglePlayerCollisionEnd(uint64_t parameter1,uint64_t parameter2);
		KARGONO_API bool BallLocalMultiCollisionStart(uint64_t parameter1,uint64_t parameter2);
		KARGONO_API void CollideRightWall(uint64_t parameter1);
		KARGONO_API void OpenLevel2();
		KARGONO_API void OpenCurrentLevel();
		KARGONO_API void HumanPlayer1MoveUp(float parameter1);
		KARGONO_API void Player1MoveUp(float deltaTime,bool isDashing);
		KARGONO_API void DetermineDash(uint64_t parameter1);
		KARGONO_API void Player1MoveDown(float deltaTime,bool isDashing);
		KARGONO_API void Player2MoveDown(float deltaTime,bool isDashing);
		KARGONO_API void Player2MoveUp(float deltaTime,bool isDashing);
		KARGONO_API void SeekMiddleOnUpdate(uint64_t parameter1,float parameter2);
		KARGONO_API void AvoidBallOnUpdate(uint64_t parameter1,float parameter2);
		KARGONO_API void OnlinePlayer2MoveUp(float parameter1);
		KARGONO_API void OnHover();
		KARGONO_API void ConnectToServer();
	}
}
