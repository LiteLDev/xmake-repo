#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/managers/IProfileEntryPromptData.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class CatalogInfo;
class CharacterSelectorModel;
// clang-format on

class CastModelPromptData : public ::IProfileEntryPromptData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::CatalogInfo&>                                        mCatalogInfo;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::CharacterSelectorModel>> mCharacterSelectorModel;
    ::ll::TypedStorage<8, 32, ::std::string>                                        mPrimaryUserID;
    ::ll::TypedStorage<1, 1, bool>                                                  mHasSeenLatestDefaultCharacterList;
    // NOLINTEND

public:
    // prevent constructor by default
    CastModelPromptData& operator=(CastModelPromptData const&);
    CastModelPromptData(CastModelPromptData const&);
    CastModelPromptData();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CastModelPromptData() /*override*/ = default;

    virtual bool allowedToOpenCheck() const /*override*/;

    virtual void callOnOpen() /*override*/;

    virtual void callOnClose() /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $allowedToOpenCheck() const;

    MCAPI void $callOnOpen();

    MCAPI void $callOnClose();
    // NOLINTEND
};
#else // @header-generator platform
class CastModelPromptData {};
#endif // @header-generator platform
#endif // @header-generator platform
