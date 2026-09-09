#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/FontHandle.h"
#include "mc/client/gui/FontSize.h"
#include "mc/client/gui/TextAlignment.h"
#include "mc/client/gui/controls/RenderableComponent.h"
#include "mc/deps/core/math/Color.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class FontRepository;
class RectangleArea;
class UIComponent;
class UIControl;
class UIMeasureStrategy;
class UIRenderContext;
// clang-format on

class TextComponent : public ::RenderableComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 80, ::FontHandle>                                         mFontHandle;
    ::ll::TypedStorage<8, 80, ::FontHandle>                                         mPrimaryFontHandle;
    ::ll::TypedStorage<8, 80, ::FontHandle>                                         mBackupFontHandle;
    ::ll::TypedStorage<4, 4, float>                                                 mTextOffset;
    ::ll::TypedStorage<4, 16, ::mce::Color>                                         mColor;
    ::ll::TypedStorage<4, 4, float>                                                 mLockedAlpha;
    ::ll::TypedStorage<4, 16, ::mce::Color>                                         mLockedColor;
    ::ll::TypedStorage<4, 4, ::ui::FontSize>                                        mFontSize;
    ::ll::TypedStorage<4, 4, float>                                                 mFontScaleFactor;
    ::ll::TypedStorage<4, 4, float>                                                 mLinePadding;
    ::ll::TypedStorage<4, 4, ::ui::TextAlignment>                                   mAlignment;
    ::ll::TypedStorage<8, 24, std::string>                                          mLabel;
    ::ll::TypedStorage<8, 24, std::string>                                          mLabelTTS;
    ::ll::TypedStorage<4, 4, float>                                                 mCurrentTime;
    ::ll::TypedStorage<4, 4, int>                                                   mLastNumChanges;
    ::ll::TypedStorage<8, 8, ulong>                                                 mLastTextHash;
    ::ll::TypedStorage<8, 8, ulong>                                                 mLastFilteredTextHash;
    ::ll::TypedStorage<8, 24, std::string>                                          mFilteredText;
    ::ll::TypedStorage<8, 24, std::string>                                          mMeasuredText;
    ::ll::TypedStorage<8, 24, std::string>                                          mCachedText;
    ::ll::TypedStorage<8, 24, std::string>                                          mLOCCachedText;
    ::ll::TypedStorage<8, 24, std::string>                                          mCachedLangCode;
    ::ll::TypedStorage<8, 24, std::string>                                          mCachedFontSources;
    ::ll::TypedStorage<8, 24, std::string>                                          mCachedTextTTS;
    ::ll::TypedStorage<8, 24, std::vector<int>>                                     mCaretOffsets;
    ::ll::TypedStorage<4, 4, float>                                                 mCaretHeightOffset;
    ::ll::TypedStorage<4, 4, float>                                                 mLineHeight;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>                             mNotifyControlsOnEllipses;
    ::ll::UntypedStorage<8, 24>                                                     mFontRepository;
    ::ll::TypedStorage<4, 12, std::optional<glm::vec<2, float, (glm::qualifier)0>>> mLastClickRelativePosition;
    bool                                                                            mShadow                     : 1;
    bool                                                                            mShouldRenderCaret          : 1;
    bool                                                                            mLocalize                   : 1;
    bool                                                                            mCaretBlinkVisible          : 1;
    bool                                                                            mHideHyphen                 : 1;
    bool                                                                            mEnableProfanityFilter      : 1;
    bool                                                                            mProfanityFilterToggleState : 1;
    bool                                                                            mBackupFontHandleOverridden : 1;
    bool                                                                            mNotifyEllipsesOnSiblings   : 1;
    bool                                                                            mCachedTextDirty            : 1;
    // NOLINTEND

public:
    // prevent constructor by default
    TextComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TextComponent();

    virtual std::unique_ptr<UIComponent> clone(::UIControl&) const;

    virtual void reset();

    virtual std::string const& getTextToSpeechComponentValue() const;

    virtual void updateUI(::UIMeasureStrategy const&);

    virtual void render(::UIRenderContext&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI TextComponent(::UIControl&, ::gsl::not_null<Bedrock::NonOwnerPointer<const FontRepository>>);

    MCNAPI int _getCaretPosition() const;

    MCNAPI std::string _getMeasuredText(::UIRenderContext&);

    MCNAPI void _notifyOnEllipses(bool);

    MCNAPI std::string calculateUpdatedText();

    MCNAPI ::mce::Color const& getColor() const;

    MCNAPI void setAlignment(::ui::TextAlignment);

    MCNAPI void setColor(::mce::Color const&);

    MCNAPI void setFontScaleFactor(float);

    MCNAPI void setFontType(std::string const&);

    MCNAPI void setPrimaryFontHandle(::FontHandle);

    MCNAPI void setTextTTS(std::string const&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static float const& CARET_BLINK_TIME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::UIControl&, ::gsl::not_null<Bedrock::NonOwnerPointer<const FontRepository>>);
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

    MCNAPI std::string const& $getTextToSpeechComponentValue() const;

    MCNAPI void $updateUI(::UIMeasureStrategy const&);

    MCNAPI void $render(::UIRenderContext&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
