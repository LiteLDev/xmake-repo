#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/MolangScriptArg.h"
#include "mc/util/MolangVariableIndex.h"
#include "mc/util/MolangVariableMap.h"

// auto generated forward declare list
// clang-format off
class Actor;
class HashedString;
class RenderParams;
struct MolangEvalStackState;
struct MolangMemberArray;
// clang-format on

struct MolangEvalParams {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>                           mPC;
    ::ll::TypedStorage<8, 8, ::MolangScriptArg const*>       mRet;
    ::ll::TypedStorage<8, 56, ::MolangVariableMap>           mTempVariables;
    ::ll::TypedStorage<8, 56, ::MolangVariableMap>           mContextVariables;
    ::ll::TypedStorage<8, 24, std::vector<ulong>>            mContinueIndexStack;
    ::ll::TypedStorage<8, 24, std::vector<ulong>>            mBreakIndexStack;
    ::ll::TypedStorage<8, 24, std::vector<MolangScriptArg>>  mDataStack;
    ::ll::TypedStorage<8, 24, std::vector<ulong>>            mMissingVariableOrActorIndexStack;
    ::ll::TypedStorage<8, 8, ulong>                          mPublicAccessModeStack;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<RenderParams*>> mRenderParams;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Actor* getActorFromArg(::MolangScriptArg const&) const;

    MCNAPI ::Actor* getActorPtrFromPushedArray(ulong, ulong, bool&) const;

    MCNAPI ulong popMissingVariableOrActorAddress(::MolangVariableIndex);

    MCNAPI ulong popMissingVariableOrActorAddress(::HashedString const&);

    MCNAPI void pushLoopScope(ulong, ulong);

    MCNAPI void restoreStackState(::MolangEvalStackState&&);

    MCNAPI ~MolangEvalParams();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::RenderParams& mErrorRenderParams();

    MCNAPI static ::MolangEvalParams& mThreadLocalMolangEvalParams();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
