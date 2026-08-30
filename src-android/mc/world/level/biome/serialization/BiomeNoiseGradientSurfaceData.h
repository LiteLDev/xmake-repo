#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_26_30/NoiseDescriptor.h"
#include "mc/platform/Result.h"
#include "mc/world/level/biome/serialization/SerializedNoiseBlockSpecifier.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class ReadOnlyBinaryStream;
// clang-format on

struct BiomeNoiseGradientSurfaceData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<uint>>                          mNonReplaceableBlocks;
    ::ll::TypedStorage<8, 24, std::vector<SerializedNoiseBlockSpecifier>> mGradientBlockRanges;
    ::ll::TypedStorage<8, 56, ::SharedTypes::v1_26_30::NoiseDescriptor>   mNoiseDescriptor;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BiomeNoiseGradientSurfaceData(::BiomeNoiseGradientSurfaceData const&);

    MCNAPI ::BiomeNoiseGradientSurfaceData& operator=(::BiomeNoiseGradientSurfaceData&&);

    MCNAPI bool operator==(::BiomeNoiseGradientSurfaceData const&) const;

    MCNAPI ~BiomeNoiseGradientSurfaceData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::BiomeNoiseGradientSurfaceData const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
