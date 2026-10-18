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
namespace SharedTypes::v1_21_50 {

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
    MCNAPI bool operator==(::SharedTypes::v1_21_50::JigsawBlockMetadata const&) const;
#else // @header-generator platform
    MCAPI JigsawBlockMetadata(::SharedTypes::v1_21_50::JigsawBlockMetadata const&);

    MCFOLD ::SharedTypes::v1_21_50::JigsawBlockMetadata& operator=(::SharedTypes::v1_21_50::JigsawBlockMetadata const&);

    MCAPI bool operator==(::SharedTypes::v1_21_50::JigsawBlockMetadata const& rhs) const;

    MCAPI ~JigsawBlockMetadata();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::SharedTypes::v1_21_50::JigsawBlockMetadata const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_50
