#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/bhave/definition/BehaviorDefinition.h"

// auto generated forward declare list
// clang-format off
class BehaviorFactory;
namespace Json { class Value; }
// clang-format on

class MoveDefinition : public ::BehaviorDefinition {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> mDirectionToMove;
    ::ll::TypedStorage<8, 24, std::string> mDirectionToMoveId;
    ::ll::TypedStorage<8, 24, std::string> mSecondDirectionToMove;
    ::ll::TypedStorage<8, 24, std::string> mSecondDirectionToMoveId;
    ::ll::TypedStorage<4, 4, int>          mNumberOfTicksToMove;
    ::ll::TypedStorage<8, 24, std::string> mNumberOfTicksToMoveId;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string> mDirectionToMove;
    ::ll::TypedStorage<8, 32, ::std::string> mDirectionToMoveId;
    ::ll::TypedStorage<8, 32, ::std::string> mSecondDirectionToMove;
    ::ll::TypedStorage<8, 32, ::std::string> mSecondDirectionToMoveId;
    ::ll::TypedStorage<4, 4, int>            mNumberOfTicksToMove;
    ::ll::TypedStorage<8, 32, ::std::string> mNumberOfTicksToMoveId;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~MoveDefinition();

    virtual void load(::Json::Value, ::BehaviorFactory const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual void load(::Json::Value value, ::BehaviorFactory const& factory) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $load(::Json::Value, ::BehaviorFactory const&);
    // NOLINTEND
#else // @header-generator platform
    MCAPI void $load(::Json::Value value, ::BehaviorFactory const& factory);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};
