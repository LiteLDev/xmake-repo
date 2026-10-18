#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_26_30/NoiseDescriptor.h"
#include "mc/platform/Result.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/biome/serialization/SerializedNoiseBlockSpecifier.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class BinaryStream;
#else // @header-generator platform
#endif // @header-generator platform
class ReadOnlyBinaryStream;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct SerializedNoiseBlockSpecifier;
#endif // @header-generator platform
// clang-format on

struct BiomeNoiseGradientSurfaceData {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<uint>>                          mNonReplaceableBlocks;
    ::ll::TypedStorage<8, 24, std::vector<SerializedNoiseBlockSpecifier>> mGradientBlockRanges;
    ::ll::TypedStorage<8, 56, ::SharedTypes::v1_26_30::NoiseDescriptor>   mNoiseDescriptor;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<uint>>                            mNonReplaceableBlocks;
    ::ll::TypedStorage<8, 24, ::std::vector<::SerializedNoiseBlockSpecifier>> mGradientBlockRanges;
    ::ll::TypedStorage<8, 64, ::SharedTypes::v1_26_30::NoiseDescriptor>       mNoiseDescriptor;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI BiomeNoiseGradientSurfaceData(::BiomeNoiseGradientSurfaceData const&);
#else // @header-generator platform
    MCAPI bool operator==(::BiomeNoiseGradientSurfaceData const& other) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::BiomeNoiseGradientSurfaceData& operator=(::BiomeNoiseGradientSurfaceData&&);

    MCNAPI bool operator==(::BiomeNoiseGradientSurfaceData const&) const;

    MCNAPI ~BiomeNoiseGradientSurfaceData();
#else // @header-generator platform
    MCAPI ~BiomeNoiseGradientSurfaceData();
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // constructor thunks
#else // @header-generator platform
    // static functions
#endif // @header-generator platform
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::BiomeNoiseGradientSurfaceData const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI static ::Bedrock::Result<::BiomeNoiseGradientSurfaceData> read(::ReadOnlyBinaryStream& stream);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
