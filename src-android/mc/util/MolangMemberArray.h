#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/MolangStruct_BaseAndPattern.h"
#include "mc/util/MolangStruct_BlockAndSky.h"
#include "mc/util/MolangStruct_MinAndMax.h"
#include "mc/util/MolangStruct_PoseIndexAndHurtTime.h"
#include "mc/util/MolangStruct_RGB.h"
#include "mc/util/MolangStruct_RGBA.h"
#include "mc/util/MolangStruct_RGBABlockAndSky.h"
#include "mc/util/MolangStruct_RotYAndPosY.h"
#include "mc/util/MolangStruct_SpeedAndDirection.h"
#include "mc/util/MolangStruct_TRS.h"
#include "mc/util/MolangStruct_TentacleAngleAndSwimRotation.h"
#include "mc/util/MolangStruct_Time.h"
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
struct tm;
namespace mce { class Color; }
// clang-format on

struct MolangMemberArray {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mMembers;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MolangMemberArray(::MolangStruct_RGB, ::mce::Color const&);

    MCNAPI MolangMemberArray(::MolangStruct_RGBA, ::mce::Color const&);

    MCNAPI MolangMemberArray(::MolangStruct_XY, ::Vec2 const&);

    MCNAPI MolangMemberArray(::MolangStruct_XYZ, ::Vec3 const&);

    MCNAPI MolangMemberArray(::MolangStruct_Z, float);

    MCNAPI MolangMemberArray(::MolangStruct_BaseAndPattern, int, int);

    MCNAPI MolangMemberArray(::MolangStruct_MinAndMax, ::MolangMemberArray&&, ::MolangMemberArray&&);

    MCNAPI MolangMemberArray(::MolangStruct_PoseIndexAndHurtTime, int, int);

    MCNAPI MolangMemberArray(::MolangStruct_RotYAndPosY, float, float);

    MCNAPI MolangMemberArray(::MolangStruct_SpeedAndDirection, float, ::Vec3 const&);

    MCNAPI MolangMemberArray(::MolangStruct_TentacleAngleAndSwimRotation, float, float);

    MCNAPI MolangMemberArray(::MolangStruct_UV, float, float);

    MCNAPI MolangMemberArray(::MolangStruct_TRS, ::MolangMemberArray&&, ::MolangMemberArray&&, ::MolangMemberArray&&);

    MCNAPI void add(::HashedString const&, ::MolangScriptArg const&);

    MCNAPI ::MolangScriptArg const* get(ulong) const;

    MCNAPI ::MolangScriptArg& getOrAdd(::HashedString const&);

    MCNAPI ~MolangMemberArray();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::MolangMemberArray const& getDefaultErrorValue();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::MolangStruct_RGB, ::mce::Color const&);

    MCNAPI void* $ctor(::MolangStruct_RGBA, ::mce::Color const&);

    MCNAPI void* $ctor(::MolangStruct_XY, ::Vec2 const&);

    MCNAPI void* $ctor(::MolangStruct_XYZ, ::Vec3 const&);

    MCNAPI void* $ctor(::MolangStruct_Z, float);

    MCNAPI void* $ctor(::MolangStruct_BaseAndPattern, int, int);

    MCNAPI void* $ctor(::MolangStruct_MinAndMax, ::MolangMemberArray&&, ::MolangMemberArray&&);

    MCNAPI void* $ctor(::MolangStruct_PoseIndexAndHurtTime, int, int);

    MCNAPI void* $ctor(::MolangStruct_RotYAndPosY, float, float);

    MCNAPI void* $ctor(::MolangStruct_SpeedAndDirection, float, ::Vec3 const&);

    MCNAPI void* $ctor(::MolangStruct_TentacleAngleAndSwimRotation, float, float);

    MCNAPI void* $ctor(::MolangStruct_UV, float, float);

    MCNAPI void* $ctor(::MolangStruct_TRS, ::MolangMemberArray&&, ::MolangMemberArray&&, ::MolangMemberArray&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
