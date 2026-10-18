#pragma once

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "ll/api/base/Concepts.h"
#endif // @header-generator platform
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

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class HashedString;
struct MolangActorIdPtr;
struct MolangActorPtr;
struct MolangItemStackBasePtr;
struct MolangLoopBreak;
struct MolangLoopContinue;
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
struct MolangScriptArg {
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
public:
    using MolangScriptArgData = std::variant<
        ::MolangMatrix,
        ::MaterialVariants,
        ::MolangActorArrayPtr,
        ::MolangActorIdArrayPtr,
        ::MolangArrayVariable,
        ::MolangClientTextureSet,
        ::MolangContextVariable,
        ::MolangDataDrivenGeometry,
        ::MolangEntityVariable,
        ::MolangGeometryVariable,
        ::MolangMaterialVariable,
        ::MolangMemberAccessor,
        ::MolangMemberArray,
        ::MolangQueryFunctionPtr,
        ::MolangTempVariable,
        ::MolangTextureVariable,
        ::MolangOffsetPlaceholder,
        ::MolangResourceOffset>;

    MolangScriptArg(MolangLoopBreak loopBreak) : mType(MolangScriptArgType::MolangLoopBreak), mPOD(loopBreak) {}
    MolangScriptArg(MolangLoopContinue loopContinue)
    : mType(MolangScriptArgType::MolangLoopContinue),
      mPOD(loopContinue) {}
    MolangScriptArg(Actor const& actor) : mType(MolangScriptArgType::MolangActorPtr), mPOD(std::addressof(actor)) {}
    MolangScriptArg(ActorUniqueID actorId) : mType(MolangScriptArgType::MolangActorIdPtr), mPOD(actorId) {}
    MolangScriptArg(ItemStackBase const& item)
    : mType(MolangScriptArgType::MolangItemStackBasePtr),
      mPOD(std::addressof(item)) {}
    MolangScriptArg(float val) : mType(MolangScriptArgType::Float), mPOD(val) {}

    template <ll::concepts::IsInTypes<MolangScriptArgData> T>
    MolangScriptArg(T const& val) : mType(MolangScriptArgType::Variant),
                                    mData(val) {}

#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<4, 4, ::MolangScriptArgType> mType;
    ::ll::TypedStorage<8, 8, ::MolangScriptArgPOD> mPOD;
    ::ll::TypedStorage<8, 72, std::variant<MolangMatrix, MaterialVariants, MolangActorArrayPtr, MolangActorIdArrayPtr, MolangArrayVariable, MolangClientTextureSet, MolangContextVariable, MolangDataDrivenGeometry, MolangEntityVariable, MolangGeometryVariable, MolangMaterialVariable, MolangMemberAccessor, MolangMemberArray, MolangQueryFunctionPtr, MolangTempVariable, MolangTextureVariable, MolangOffsetPlaceholder, MolangResourceOffset>> mData;
    // clang-format on
#else // @header-generator platform
    ::MolangScriptArgType mType;
    ::MolangScriptArgPOD  mPOD;
    MolangScriptArgData   mData;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    MolangScriptArg& operator=(MolangScriptArg const& other) {
        if (this != &other) {
            mType = other.mType;
            if (other.mType != MolangScriptArgType::Unset) {
                if (other.mType != MolangScriptArgType::Variant) {
                    mPOD = other.mPOD;
                } else {
                    mData = other.mData;
                }
            }
        }
        return *this;
    }
    MolangScriptArg() = default;
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _setPOD(float);
#else // @header-generator platform
    MCAPI MolangScriptArg(::MolangScriptArg const& other);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _setPOD(ulong);
#else // @header-generator platform
    MCAPI ::MolangScriptArg& operator=(::MolangScriptArg&& other);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI void reportGetFailure() const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::MolangScriptArg const& mDefaultReturnValue_break();
#else // @header-generator platform
    MCAPI static ::MolangScriptArg const& mDefaultReturnValue_break();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::MolangScriptArg const& mDefaultReturnValue_emptyStringHash();
#else // @header-generator platform
    MCAPI static ::MolangScriptArg const& mDefaultReturnValue_emptyStringHash();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::MolangScriptArg const& mDefaultReturnValue_float0();
#else // @header-generator platform
    MCAPI static ::MolangScriptArg const& mDefaultReturnValue_float0();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::MolangScriptArg const& mDefaultReturnValue_float1();
#else // @header-generator platform
    MCAPI static ::MolangScriptArg const& mDefaultReturnValue_float1();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::MolangScriptArg const& mDefaultReturnValue_floatNeg1();
#else // @header-generator platform
    MCAPI static ::MolangScriptArg const& mDefaultReturnValue_floatNeg1();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::MolangScriptArg const& mDefaultReturnValue_molangActorIdEmptyArrayPtr();
#else // @header-generator platform
    MCAPI static ::MolangScriptArg const& mDefaultReturnValue_molangActorIdEmptyArrayPtr();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::MolangScriptArg const& mDefaultReturnValue_structUV0();
#else // @header-generator platform
    MCAPI static ::MolangScriptArg const& mDefaultReturnValue_structUV0();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::MolangScriptArg const& other);
#endif // @header-generator platform
    // NOLINTEND
};
