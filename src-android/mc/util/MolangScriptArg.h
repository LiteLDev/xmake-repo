#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/minecraft_renderer/renderer/MaterialVariants.h"
#include "mc/util/MolangActorArrayPtr.h"
#include "mc/util/MolangActorIdArrayPtr.h"
#include "mc/util/MolangArrayVariable.h"
#include "mc/util/MolangClientTextureSet.h"
#include "mc/util/MolangContextVariable.h"
#include "mc/util/MolangDataDrivenGeometry.h"
#include "mc/util/MolangEntityVariable.h"
#include "mc/util/MolangGeometryVariable.h"
#include "mc/util/MolangMaterialVariable.h"
#include "mc/util/MolangMatrix.h"
#include "mc/util/MolangMemberAccessor.h"
#include "mc/util/MolangMemberArray.h"
#include "mc/util/MolangOffsetPlaceholder.h"
#include "mc/util/MolangQueryFunctionPtr.h"
#include "mc/util/MolangResourceOffset.h"
#include "mc/util/MolangScriptArgPOD.h"
#include "mc/util/MolangScriptArgType.h"
#include "mc/util/MolangTempVariable.h"
#include "mc/util/MolangTextureVariable.h"

// auto generated forward declare list
// clang-format off
class HashedString;
struct MolangActorIdPtr;
struct MolangActorPtr;
struct MolangItemStackBasePtr;
struct MolangLoopBreak;
struct MolangLoopContinue;
// clang-format on

struct MolangScriptArg {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<4, 4, ::MolangScriptArgType> mType;
    ::ll::TypedStorage<8, 8, ::MolangScriptArgPOD> mPOD;
    ::ll::TypedStorage<8, 72, std::variant<MolangMatrix, MaterialVariants, MolangActorArrayPtr, MolangActorIdArrayPtr, MolangArrayVariable, MolangClientTextureSet, MolangContextVariable, MolangDataDrivenGeometry, MolangEntityVariable, MolangGeometryVariable, MolangMaterialVariable, MolangMemberAccessor, MolangMemberArray, MolangQueryFunctionPtr, MolangTempVariable, MolangTextureVariable, MolangOffsetPlaceholder, MolangResourceOffset>> mData;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _setPOD(float);

    MCNAPI void _setPOD(ulong);

    MCNAPI void _setPOD(::MolangItemStackBasePtr);

    MCNAPI void _setPOD(::MolangActorPtr);

    MCNAPI ::MolangMemberArray* getAsNonConstMolangMemberArray();

    MCNAPI ::MolangScriptArgType getBaseType() const;

    MCNAPI ::HashedString const& getName() const;

    MCNAPI bool isEqual(::MolangScriptArg const&) const;

    MCNAPI bool operator!=(::MolangScriptArg const&) const;

    MCNAPI ::MolangScriptArg& operator=(::MolangScriptArg const&);

    MCNAPI ::MolangScriptArg& operator=(::MolangScriptArg&&);

    MCNAPI bool operator==(::MolangScriptArg const&) const;

    MCNAPI void reportGetFailure() const;

    MCNAPI void setType(::MolangScriptArgType);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::MolangScriptArg const& mDefaultReturnValue_break();

    MCNAPI static ::MolangScriptArg const& mDefaultReturnValue_emptyStringHash();

    MCNAPI static ::MolangScriptArg const& mDefaultReturnValue_float0();

    MCNAPI static ::MolangScriptArg const& mDefaultReturnValue_float1();

    MCNAPI static ::MolangScriptArg const& mDefaultReturnValue_floatNeg1();

    MCNAPI static ::MolangScriptArg const& mDefaultReturnValue_molangActorIdEmptyArrayPtr();

    MCNAPI static ::MolangScriptArg const& mDefaultReturnValue_structUV0();
    // NOLINTEND
};
