#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/managers/IProfileEntryPromptData.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class CatalogInfo;
class CharacterSelectorModel;
class PersonaScreenModel;
// clang-format on

class CastModelPromptData : public ::IProfileEntryPromptData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::CatalogInfo&> mCatalogInfo;
    ::ll::UntypedStorage<8, 24>              mCharacterSelectorModel;
    ::ll::TypedStorage<8, 24, std::string>   mPrimaryUserID;
    ::ll::TypedStorage<1, 1, bool>           mHasSeenLatestDefaultCharacterList;
    // NOLINTEND

public:
    // prevent constructor by default
    CastModelPromptData& operator=(CastModelPromptData const&);
    CastModelPromptData(CastModelPromptData const&);
    CastModelPromptData();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CastModelPromptData();

    virtual bool allowedToOpenCheck() const;

    virtual void callOnOpen();

    virtual void callOnClose();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $allowedToOpenCheck() const;

    MCNAPI void $callOnOpen();

    MCNAPI void $callOnClose();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
