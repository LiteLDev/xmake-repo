#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/platform/brstd/flat_map.h"

// auto generated forward declare list
// clang-format off
class AtlasItemManager;
class ClientboundTextureShiftPacket;
namespace TextureShift { class TextureShiftBufferManager; }
namespace TextureShift { class TextureShiftCollectionManager; }
namespace TextureShift { class TextureShiftResourceManager; }
namespace TextureShift { struct CollectionState; }
namespace TextureShift { struct ShiftResource; }
namespace TextureShift { struct TextureShiftDescription; }
namespace mce { struct TextureShiftBuffer; }
// clang-format on

class TextureShiftManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                                         mPendingUpdates;
    ::ll::TypedStorage<8, 8, std::unique_ptr<TextureShift::TextureShiftBufferManager>>     mBufferManager;
    ::ll::TypedStorage<8, 8, std::unique_ptr<TextureShift::TextureShiftResourceManager>>   mResourceManager;
    ::ll::TypedStorage<8, 8, std::unique_ptr<TextureShift::TextureShiftCollectionManager>> mCollectionManager;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI TextureShiftManager();

    MCNAPI std::vector<mce::TextureShiftBuffer> const& getShiftBuffer() const;

    MCNAPI bool isInitialized() const;

    MCNAPI void onTextureAtlasUpdated();

    MCNAPI bool processShiftBufferUpdates();

    MCNAPI void reset();

    MCNAPI void tickUpdate(float const, ulong const);

    MCNAPI std::optional<ulong> tryGetBufferIndex(std::string const&) const;

    MCNAPI ~TextureShiftManager();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class TextureShiftManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk679b3c;
    ::ll::UntypedStorage<8, 8> mUnkce97e6;
    ::ll::UntypedStorage<8, 8> mUnk3b776c;
    ::ll::UntypedStorage<8, 8> mUnk1a8f3d;
    // NOLINTEND

public:
    // prevent constructor by default
    TextureShiftManager& operator=(TextureShiftManager const&);
    TextureShiftManager(TextureShiftManager const&);
    TextureShiftManager();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void reset();

    MCNAPI void tickUpdate(float currentTime, uint64 ticksPassed);

    MCNAPI ~TextureShiftManager();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
class TextureShiftManager {};
#endif // @header-generator platform
#endif // @header-generator platform
