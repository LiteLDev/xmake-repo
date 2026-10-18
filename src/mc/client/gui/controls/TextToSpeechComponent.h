#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/controls/UIComponent.h"

// auto generated forward declare list
// clang-format off
class UIControl;
// clang-format on

class TextToSpeechComponent : public ::UIComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>          mTTSComponentNamePriority;
    ::ll::TypedStorage<4, 4, int>          mTTSComponentValuePriority;
    ::ll::TypedStorage<4, 4, int>          mTTSIndexValuePriority;
    ::ll::TypedStorage<8, 24, std::string> mOverrideComponentValue;
    ::ll::TypedStorage<8, 24, std::string> mComponentHeader;
    ::ll::TypedStorage<8, 24, std::string> mSectionHeaderOverride;
    ::ll::TypedStorage<8, 24, std::string> mTTSControlType;
    ::ll::TypedStorage<1, 1, bool>         mInheritTTSSiblings;
    ::ll::TypedStorage<1, 1, bool>         mMessageInterruptible;
    ::ll::TypedStorage<8, 24, std::string> mMessageInterruptibleId;
    ::ll::TypedStorage<4, 4, int>          mTTSIndexOrder;
    ::ll::TypedStorage<1, 1, bool>         mIgnoreSubsections;
    ::ll::TypedStorage<1, 1, bool>         mIgnoreForTTSIndexCount;
    ::ll::TypedStorage<1, 1, bool>         mSkipNarration;
    ::ll::TypedStorage<1, 1, bool>         mSkipChildren;
    ::ll::TypedStorage<1, 1, bool>         mSkipEnumeration;
    ::ll::TypedStorage<1, 1, bool>         mPlayOnUnchangedFocusControl;
    // NOLINTEND

public:
    // prevent constructor by default
    TextToSpeechComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TextToSpeechComponent();

    virtual std::unique_ptr<UIComponent> clone(::UIControl&) const;

    virtual void reset();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI std::string const _convertString(
        std::string const&,
        std::function<std::string(const std::string&, std::optional<std::vector<std::string>>)> const&
    ) const;

    MCNAPI int _getControlIndex(std::shared_ptr<UIControl>);

    MCNAPI int _getMaximumContainerSize(std::shared_ptr<UIControl>);

    MCNAPI int getControlIndex();

    MCNAPI bool getInheritTTSSiblings() const;

    MCNAPI int getSectionCount();

    MCNAPI bool getSkipChildren() const;

    MCNAPI bool getTTSMessageInterruptible() const;

    MCNAPI std::string getTTSMessageInterruptibleId() const;

    MCNAPI void populateMessageQueue(
        std::multimap<int, std::string>&,
        bool,
        std::string&,
        std::function<std::string(const std::string&, std::optional<std::vector<std::string>>)> const&
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::unique_ptr<UIComponent> $clone(::UIControl&) const;

    MCNAPI void $reset();
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
#include "mc/client/gui/controls/UIComponent.h"

// auto generated forward declare list
// clang-format off
class UIControl;
// clang-format on

class TextToSpeechComponent : public ::UIComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>            mTTSComponentNamePriority;
    ::ll::TypedStorage<4, 4, int>            mTTSComponentValuePriority;
    ::ll::TypedStorage<4, 4, int>            mTTSIndexValuePriority;
    ::ll::TypedStorage<8, 32, ::std::string> mOverrideComponentValue;
    ::ll::TypedStorage<8, 32, ::std::string> mComponentHeader;
    ::ll::TypedStorage<8, 32, ::std::string> mSectionHeaderOverride;
    ::ll::TypedStorage<8, 32, ::std::string> mTTSControlType;
    ::ll::TypedStorage<1, 1, bool>           mInheritTTSSiblings;
    ::ll::TypedStorage<1, 1, bool>           mMessageInterruptible;
    ::ll::TypedStorage<8, 32, ::std::string> mMessageInterruptibleId;
    ::ll::TypedStorage<4, 4, int>            mTTSIndexOrder;
    ::ll::TypedStorage<1, 1, bool>           mIgnoreSubsections;
    ::ll::TypedStorage<1, 1, bool>           mIgnoreForTTSIndexCount;
    ::ll::TypedStorage<1, 1, bool>           mSkipNarration;
    ::ll::TypedStorage<1, 1, bool>           mSkipChildren;
    ::ll::TypedStorage<1, 1, bool>           mSkipEnumeration;
    ::ll::TypedStorage<1, 1, bool>           mPlayOnUnchangedFocusControl;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TextToSpeechComponent() /*override*/ = default;

    virtual ::std::unique_ptr<::UIComponent> clone(::UIControl& cloneOwner) const /*override*/;

    virtual void reset() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::string const _convertString(
        ::std::string const& value,
        ::std::function<::std::string(::std::string const&, ::std::optional<::std::vector<::std::string>>)> const&
            localizationCallback
    ) const;

    MCAPI int _getControlIndex(::std::shared_ptr<::UIControl> ancestor);

    MCAPI int _getMaximumContainerSize(::std::shared_ptr<::UIControl> ancestor);

    MCAPI int getControlIndex();

    MCAPI int getSectionCount();

    MCFOLD ::std::string getTTSMessageInterruptibleId() const;

    MCAPI void populateMessageQueue(
        ::std::multimap<int, ::std::string>& messageQueue,
        bool                                 excludeHeader,
        ::std::string&                       sectionHeader,
        ::std::function<::std::string(::std::string const&, ::std::optional<::std::vector<::std::string>>)> const&
            localizationCallback
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::unique_ptr<::UIComponent> $clone(::UIControl& cloneOwner) const;

    MCFOLD void $reset();
    // NOLINTEND
};
#else // @header-generator platform
class TextToSpeechComponent {};
#endif // @header-generator platform
#endif // @header-generator platform
