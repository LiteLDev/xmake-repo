#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/world/level/biome/components/BiomeComponentBase.h"

struct ClientAmbientSoundComponent : public ::BiomeComponentBase {
#else // @header-generator platform
struct ClientAmbientSoundComponent {
#endif // @header-generator platform
public:
    // ClientAmbientSoundComponent inner types declare
    // clang-format off
    struct Addition;
    // clang-format on

    // ClientAmbientSoundComponent inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct Addition {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 40, ::HashedString> mAsset;
        ::ll::TypedStorage<4, 4, float>           mChance;
        // NOLINTEND

    public:
        // prevent constructor by default
        Addition& operator=(Addition const&);
        Addition(Addition const&);
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::ClientAmbientSoundComponent::Addition> mAdditionSound;
    ::ll::TypedStorage<8, 40, ::HashedString>                          mLoopSound;
    ::ll::TypedStorage<8, 40, ::HashedString>                          mMoodSound;
    ::ll::TypedStorage<8, 48, ::ClientAmbientSoundComponent::Addition> mUnderwaterAdditionSound;
    ::ll::TypedStorage<8, 40, ::HashedString>                          mUnderwaterLoopSound;
    ::ll::TypedStorage<8, 40, ::HashedString>                          mUnderwaterMoodSound;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ClientAmbientSoundComponent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
#else // @header-generator platform
    struct Addition {};
#endif // @header-generator platform
};
