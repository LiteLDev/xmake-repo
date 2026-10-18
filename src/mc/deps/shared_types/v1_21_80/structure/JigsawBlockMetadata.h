#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/world/level/levelgen/structure/JigsawJointType.h"
#include "mc/world/level/BlockPos.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace SharedTypes::v1_21_80 {

class JigsawBlockMetadata {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                   mName;
    ::ll::TypedStorage<8, 24, std::string>                   mPoolName;
    ::ll::TypedStorage<8, 24, std::string>                   mTargetName;
    ::ll::TypedStorage<8, 24, std::string>                   mBlockSerializationId;
    ::ll::TypedStorage<8, 24, std::string>                   mFinalBlockSerializationId;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>                 mName;
    ::ll::TypedStorage<8, 32, ::std::string>                 mPoolName;
    ::ll::TypedStorage<8, 32, ::std::string>                 mTargetName;
    ::ll::TypedStorage<8, 32, ::std::string>                 mBlockSerializationId;
    ::ll::TypedStorage<8, 32, ::std::string>                 mFinalBlockSerializationId;
#endif // @header-generator platform
    ::ll::TypedStorage<1, 1, ::SharedTypes::JigsawJointType> mJointType;
    ::ll::TypedStorage<4, 12, ::BlockPos>                    mPosition;
    ::ll::TypedStorage<4, 4, int>                            mSelectionPriority;
    ::ll::TypedStorage<4, 4, int>                            mPlacementPriority;
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
    JigsawBlockMetadata(JigsawBlockMetadata const&);
#else // @header-generator platform
    JigsawBlockMetadata();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI JigsawBlockMetadata(::SharedTypes::v1_21_80::JigsawBlockMetadata&&);
#else // @header-generator platform
    MCAPI JigsawBlockMetadata(::SharedTypes::v1_21_80::JigsawBlockMetadata const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::SharedTypes::v1_21_80::JigsawBlockMetadata& operator=(::SharedTypes::v1_21_80::JigsawBlockMetadata const&);
#else // @header-generator platform
    MCFOLD ::SharedTypes::v1_21_80::JigsawBlockMetadata& operator=(::SharedTypes::v1_21_80::JigsawBlockMetadata const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool operator==(::SharedTypes::v1_21_80::JigsawBlockMetadata const&) const;
#else // @header-generator platform
    MCAPI bool operator==(::SharedTypes::v1_21_80::JigsawBlockMetadata const& rhs) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~JigsawBlockMetadata();
#else // @header-generator platform
    MCAPI ~JigsawBlockMetadata();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::SharedTypes::v1_21_80::JigsawBlockMetadata&&);
#else // @header-generator platform
    MCFOLD void* $ctor(::SharedTypes::v1_21_80::JigsawBlockMetadata const&);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCFOLD void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_80
