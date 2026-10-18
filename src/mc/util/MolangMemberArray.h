#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/util/MolangMemberVariable.h"
#endif // @header-generator platform

// auto generated inclusion list
#include "mc/util/MolangStruct_BaseAndPattern.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/util/MolangStruct_BlockAndSky.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/util/MolangStruct_MinAndMax.h"
#include "mc/util/MolangStruct_PoseIndexAndHurtTime.h"
#include "mc/util/MolangStruct_RGB.h"
#include "mc/util/MolangStruct_RGBA.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/util/MolangStruct_RGBABlockAndSky.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/util/MolangStruct_RotYAndPosY.h"
#include "mc/util/MolangStruct_SpeedAndDirection.h"
#include "mc/util/MolangStruct_TRS.h"
#include "mc/util/MolangStruct_TentacleAngleAndSwimRotation.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/util/MolangStruct_Time.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/util/MolangStruct_UV.h"
#include "mc/util/MolangStruct_XY.h"
#include "mc/util/MolangStruct_XYZ.h"
#include "mc/util/MolangStruct_Z.h"

// auto generated forward declare list
// clang-format off
class HashedString;
class Vec2;
class Vec3;
struct MolangMemberVariable;
struct MolangScriptArg;
#if defined(LL_PLAT_A) // @header-generator platform
struct tm;
#else // @header-generator platform
#endif // @header-generator platform
namespace mce { class Color; }
// clang-format on

struct MolangMemberArray {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 24> mMembers;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::MolangMemberVariable>> mMembers;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    MolangMemberArray();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI MolangMemberArray(::MolangStruct_RGB, ::mce::Color const&);
#else // @header-generator platform
    MCAPI MolangMemberArray(::MolangStruct_RGB, ::mce::Color const& color);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI MolangMemberArray(::MolangStruct_RGBA, ::mce::Color const&);
#else // @header-generator platform
    MCAPI MolangMemberArray(::MolangStruct_RGBA, ::mce::Color const& color);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI MolangMemberArray(::MolangStruct_XY, ::Vec2 const&);
#else // @header-generator platform
    MCAPI MolangMemberArray(::MolangStruct_XY, ::Vec2 const& vec);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI MolangMemberArray(::MolangStruct_XYZ, ::Vec3 const&);
#else // @header-generator platform
    MCAPI MolangMemberArray(::MolangStruct_XYZ, ::Vec3 const& vec);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI MolangMemberArray(::MolangStruct_Z, float);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI MolangMemberArray(::MolangStruct_Z, float z);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI MolangMemberArray(::MolangStruct_BaseAndPattern, int, int);
#else // @header-generator platform
    MCAPI MolangMemberArray(::MolangStruct_BaseAndPattern, int base, int pattern);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI MolangMemberArray(::MolangStruct_MinAndMax, ::MolangMemberArray&&, ::MolangMemberArray&&);
#else // @header-generator platform
    MCAPI MolangMemberArray(::MolangStruct_MinAndMax, ::MolangMemberArray&& min, ::MolangMemberArray&& max);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI MolangMemberArray(::MolangStruct_PoseIndexAndHurtTime, int, int);
#else // @header-generator platform
    MCAPI MolangMemberArray(::MolangStruct_PoseIndexAndHurtTime, int poseIndex, int hurtTime);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI MolangMemberArray(::MolangStruct_RotYAndPosY, float, float);
#else // @header-generator platform
    MCAPI MolangMemberArray(::MolangStruct_RotYAndPosY, float rotY, float posY);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI MolangMemberArray(::MolangStruct_SpeedAndDirection, float, ::Vec3 const&);
#else // @header-generator platform
    MCAPI MolangMemberArray(::MolangStruct_SpeedAndDirection, float speed, ::Vec3 const& direction);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI MolangMemberArray(::MolangStruct_TentacleAngleAndSwimRotation, float, float);
#else // @header-generator platform
    MCAPI MolangMemberArray(::MolangStruct_TentacleAngleAndSwimRotation, float tentacleAngle, float swimRotation);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI MolangMemberArray(::MolangStruct_UV, float, float);
#else // @header-generator platform
    MCAPI MolangMemberArray(::MolangStruct_UV, float u, float v);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI MolangMemberArray(::MolangStruct_TRS, ::MolangMemberArray&&, ::MolangMemberArray&&, ::MolangMemberArray&&);
#else // @header-generator platform
    MCAPI MolangMemberArray(
        ::MolangStruct_TRS,
        ::MolangMemberArray&& translation,
        ::MolangMemberArray&& rotation,
        ::MolangMemberArray&& scale
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void add(::HashedString const&, ::MolangScriptArg const&);
#else // @header-generator platform
    MCAPI void add(::HashedString const& name, ::MolangScriptArg const& value);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::MolangScriptArg const* get(ulong) const;

    MCNAPI ::MolangScriptArg& getOrAdd(::HashedString const&);

    MCNAPI ~MolangMemberArray();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::MolangMemberArray const& getDefaultErrorValue();
#else // @header-generator platform
    MCAPI ::MolangScriptArg& getOrAdd(::HashedString const& name);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::MolangStruct_RGB, ::mce::Color const&);
#else // @header-generator platform
    MCAPI void* $ctor(::MolangStruct_RGB, ::mce::Color const& color);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::MolangStruct_RGBA, ::mce::Color const&);
#else // @header-generator platform
    MCAPI void* $ctor(::MolangStruct_RGBA, ::mce::Color const& color);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::MolangStruct_XY, ::Vec2 const&);
#else // @header-generator platform
    MCAPI void* $ctor(::MolangStruct_XY, ::Vec2 const& vec);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::MolangStruct_XYZ, ::Vec3 const&);
#else // @header-generator platform
    MCAPI void* $ctor(::MolangStruct_XYZ, ::Vec3 const& vec);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::MolangStruct_Z, float);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void* $ctor(::MolangStruct_Z, float z);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::MolangStruct_BaseAndPattern, int, int);
#else // @header-generator platform
    MCAPI void* $ctor(::MolangStruct_BaseAndPattern, int base, int pattern);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::MolangStruct_MinAndMax, ::MolangMemberArray&&, ::MolangMemberArray&&);
#else // @header-generator platform
    MCAPI void* $ctor(::MolangStruct_MinAndMax, ::MolangMemberArray&& min, ::MolangMemberArray&& max);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::MolangStruct_PoseIndexAndHurtTime, int, int);
#else // @header-generator platform
    MCAPI void* $ctor(::MolangStruct_PoseIndexAndHurtTime, int poseIndex, int hurtTime);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::MolangStruct_RotYAndPosY, float, float);
#else // @header-generator platform
    MCAPI void* $ctor(::MolangStruct_RotYAndPosY, float rotY, float posY);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::MolangStruct_SpeedAndDirection, float, ::Vec3 const&);
#else // @header-generator platform
    MCAPI void* $ctor(::MolangStruct_SpeedAndDirection, float speed, ::Vec3 const& direction);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::MolangStruct_TentacleAngleAndSwimRotation, float, float);
#else // @header-generator platform
    MCAPI void* $ctor(::MolangStruct_TentacleAngleAndSwimRotation, float tentacleAngle, float swimRotation);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::MolangStruct_UV, float, float);
#else // @header-generator platform
    MCAPI void* $ctor(::MolangStruct_UV, float u, float v);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::MolangStruct_TRS, ::MolangMemberArray&&, ::MolangMemberArray&&, ::MolangMemberArray&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(
        ::MolangStruct_TRS,
        ::MolangMemberArray&& translation,
        ::MolangMemberArray&& rotation,
        ::MolangMemberArray&& scale
    );
#endif // @header-generator platform
    // NOLINTEND
};
