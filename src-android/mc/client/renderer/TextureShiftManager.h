#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
