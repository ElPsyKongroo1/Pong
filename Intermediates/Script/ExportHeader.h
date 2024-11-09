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
#include "Kargono/Core/KeyCodes.h"
#include "Kargono/Core/MouseCodes.h"
#include "Kargono/Physics/Physics2DCommon.h"
template<typename T>
T& RValueToLValue(T && value)
{
return value;
}
namespace Kargono
{
extern "C"
	{
KARGONO_API void AddVoidNone(const std::string& funcName, std::function<void()> funcPtr);
KARGONO_API void AddVoidString(const std::string& funcName, std::function<void(const std::string&)> funcPtr);
KARGONO_API void AddVoidUInt16(const std::string& funcName, std::function<void(uint16_t)> funcPtr);
KARGONO_API void AddVoidUInt64(const std::string& funcName, std::function<void(uint64_t)> funcPtr);
KARGONO_API void AddVoidUInt64UInt64(const std::string& funcName, std::function<void(uint64_t, uint64_t)> funcPtr);
KARGONO_API void AddVoidVec3(const std::string& funcName, std::function<void(Math::vec3)> funcPtr);
KARGONO_API void AddVoidVec3Vec3(const std::string& funcName, std::function<void(Math::vec3, Math::vec3)> funcPtr);
KARGONO_API void AddVoidStringBool(const std::string& funcName, std::function<void(const std::string&, bool)> funcPtr);
KARGONO_API void AddVoidStringVoidPtr(const std::string& funcName, std::function<void(const std::string&, void*)> funcPtr);
KARGONO_API void AddVoidStringString(const std::string& funcName, std::function<void(const std::string&, const std::string&)> funcPtr);
KARGONO_API void AddVoidStringStringBool(const std::string& funcName, std::function<void(const std::string&, const std::string&, bool)> funcPtr);
KARGONO_API void AddVoidStringStringString(const std::string& funcName, std::function<void(const std::string&, const std::string&, const std::string&)> funcPtr);
KARGONO_API void AddVoidStringStringVec4(const std::string& funcName, std::function<void(const std::string&, const std::string&, Math::vec4)> funcPtr);
KARGONO_API void AddVoidUInt64StringVoidPtr(const std::string& funcName, std::function<void(uint64_t, const std::string&, void*)> funcPtr);
KARGONO_API void AddVoidPtrUInt64UInt64UInt64(const std::string& funcName, std::function<void*(uint64_t, uint64_t, uint64_t)> funcPtr);
KARGONO_API void AddVoidUInt64UInt64UInt64VoidPtr(const std::string& funcName, std::function<void(uint64_t, uint64_t, uint64_t, void*)> funcPtr);
KARGONO_API void AddVoidUInt32UInt64UInt64Float(const std::string& funcName, std::function<void(uint32_t, uint64_t, uint64_t, float)> funcPtr);
KARGONO_API void AddVoidPtrString(const std::string& funcName, std::function<void*(const std::string&)> funcPtr);
KARGONO_API void AddVoidPtrUInt64String(const std::string& funcName, std::function<void*(uint64_t, const std::string&)> funcPtr);
KARGONO_API void AddVoidUInt64Vec3(const std::string& funcName, std::function<void(uint64_t, Math::vec3)> funcPtr);
KARGONO_API void AddVoidUInt64Vec2(const std::string& funcName, std::function<void(uint64_t, Math::vec2)> funcPtr);
KARGONO_API void AddVoidUInt64Vec3Vec2(const std::string& funcName, std::function<void(uint64_t, Math::vec3, Math::vec2)> funcPtr);
KARGONO_API void AddBoolStringString(const std::string& funcName, std::function<bool(const std::string&, const std::string&)> funcPtr);
KARGONO_API void AddBoolUInt64String(const std::string& funcName, std::function<bool(uint64_t, const std::string&)> funcPtr);
KARGONO_API void AddBoolUInt64UInt64(const std::string& funcName, std::function<bool(uint64_t, uint64_t)> funcPtr);
KARGONO_API void AddBoolUInt16(const std::string& funcName, std::function<bool(uint16_t)> funcPtr);
KARGONO_API void AddBoolString(const std::string& funcName, std::function<bool(const std::string&)> funcPtr);
KARGONO_API void AddUInt16None(const std::string& funcName, std::function<uint16_t()> funcPtr);
KARGONO_API void AddUInt64String(const std::string& funcName, std::function<uint64_t(const std::string&)> funcPtr);
KARGONO_API void AddInt32Int32Int32(const std::string& funcName, std::function<int32_t(int32_t, int32_t)> funcPtr);
KARGONO_API void AddVec2UInt64(const std::string& funcName, std::function<Math::vec2(uint64_t)> funcPtr);
KARGONO_API void AddVec3UInt64(const std::string& funcName, std::function<Math::vec3(uint64_t)> funcPtr);
KARGONO_API void AddStringUInt64(const std::string& funcName, std::function<const std::string&(uint64_t)> funcPtr);
KARGONO_API void AddRaycastResultVec2Vec2(const std::string& funcName, std::function<Physics::RaycastResult(Math::vec2, Math::vec2)> funcPtr);
		KARGONO_API void RequestUserCount();
		KARGONO_API void SeekLocationOnUpdate(uint64_t a,float b);
		KARGONO_API void SessionReadyCheck();
		KARGONO_API void CloseApplication();
		KARGONO_API void LeaveOnlineGameplay();
		KARGONO_API void OnPress();
		KARGONO_API void MoveRight();
		KARGONO_API void MoveLeft();
		KARGONO_API void MoveDown();
		KARGONO_API void Player2MoveUp(float a);
		KARGONO_API void RequestJoinSession();
		KARGONO_API void MoveUp();
		KARGONO_API void UpdateSessionUserSlot(uint16_t a);
		KARGONO_API void Player2MoveDown(float a);
		KARGONO_API void UpdateOnlineCount(uint32_t a);
		KARGONO_API void UserLeftSession(uint16_t a);
		KARGONO_API void OnCurrentSessionInit();
		KARGONO_API void ApproveJoinSession(uint16_t a);
		KARGONO_API void OnStartSession();
		KARGONO_API void OpenMainMenu();
		KARGONO_API void Player1MoveUp(float a);
		KARGONO_API void OnConnectionTerminated();
		KARGONO_API void OpenPongGameplay();
		KARGONO_API void Player1OnCreate(uint64_t a);
		KARGONO_API void Player1MoveDown(float a);
		KARGONO_API void Player1OnUpdate(uint64_t a,float b);
		KARGONO_API void Player2OnCreate(uint64_t a);
		KARGONO_API void Player2OnUpdate(uint64_t a,float b);
		KARGONO_API void BallOnCreate(uint64_t a);
		KARGONO_API bool BallOfflineCollision(uint64_t a,uint64_t b);
		KARGONO_API bool BallOnlineCollision(uint64_t a,uint16_t b,uint64_t c);
		KARGONO_API void StartOnlineGame();
		KARGONO_API void OnReceiveSignal(uint16_t a);
		KARGONO_API bool BallOnPhysicsCollision(uint64_t a,uint64_t b);
		KARGONO_API bool BallOnPhysicsCollisionEnd(uint64_t a,uint64_t b);
		KARGONO_API void PlayMenuSelect();
		KARGONO_API void StartGame();
		KARGONO_API void OpenLevel1();
		KARGONO_API void SeekBallOnUpdate(uint64_t a,float b);
		KARGONO_API void DeflectBallOnUpdate(uint64_t a,float b);
	}
}
