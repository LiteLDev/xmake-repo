#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/controls/renderers/MinecraftUICustomRenderer.h"
#include "mc/client/gui/screens/ScreenEvent.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/minecraft_renderer/renderer/TexturePtr.h"

// auto generated forward declare list
// clang-format off
class FontHandle;
class IClientInstance;
class MinecraftUIRenderContext;
class UIControl;
class UICustomRenderer;
class UIResolvedDef;
class UIScene;
namespace Json { class Value; }
// clang-format on

class CreditsRenderer : public ::MinecraftUICustomRenderer {
public:
    // CreditsRenderer inner types declare
    // clang-format off
    struct CreditsContent;
    // clang-format on

    // CreditsRenderer inner types define
    struct CreditsContent {
    public:
        // CreditsContent inner types define
        enum Type : uint {
            TEXT  = 0,
            IMAGE = 1,
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, ::CreditsRenderer::CreditsContent::Type> mType;
        ::ll::TypedStorage<4, 4, int>                                     mHeight;
        ::ll::TypedStorage<4, 4, int>                                     mPaddingAfter;
        ::ll::TypedStorage<8, 24, std::string>                            mText;
        ::ll::TypedStorage<1, 1, bool>                                    mCentered;
        ::ll::TypedStorage<8, 32, ::mce::TexturePtr>                      mTexturePtr;
        // NOLINTEND

    public:
        // prevent constructor by default
        CreditsContent& operator=(CreditsContent const&);
        CreditsContent();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                          mInitialized;
    ::ll::TypedStorage<4, 8, ::glm::vec<2, float, (glm::qualifier)0>>       mOwnerSize;
    ::ll::TypedStorage<8, 24, std::vector<CreditsRenderer::CreditsContent>> mContent;
    ::ll::TypedStorage<4, 4, uint>                                          mIndex;
    ::ll::TypedStorage<4, 4, float>                                         mCurrentOffset;
    ::ll::TypedStorage<8, 24, std::string>                                  mPlayerName;
    ::ll::TypedStorage<4, 4, float>                                         mScrollSpeed;
    ::ll::TypedStorage<1, 1, bool>                                          mFinished;
    ::ll::TypedStorage<8, 24, std::vector<ScreenEvent>>                     mScreenEvents;
    ::ll::TypedStorage<4, 4, uint>                                          mCreditsEndEventId;
    ::ll::TypedStorage<8, 8, double>                                        mTimeNowSeconds;
    ::ll::TypedStorage<8, 8, double>                                        mTimeLastSeconds;
    ::ll::TypedStorage<8, 8, double>                                        mDeltaTimeSeconds;
    // NOLINTEND

public:
    // prevent constructor by default
    CreditsRenderer& operator=(CreditsRenderer const&);
    CreditsRenderer();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CreditsRenderer();

    virtual std::shared_ptr<UICustomRenderer> clone() const;

    virtual bool update(::IClientInstance&, ::UIControl&, ::UIScene const&);

    virtual void collectScreenEvents(std::queue<ScreenEvent, std::deque<ScreenEvent>>&);

    virtual void render(::MinecraftUIRenderContext&, ::IClientInstance&, ::UIControl&, int);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit CreditsRenderer(::UIResolvedDef const&);

    MCNAPI void _loadImageFile(::IClientInstance&, ::UIControl&, std::string const&);

    MCNAPI void _loadJsonFile(::IClientInstance&, ::UIControl&, std::string const&);

    MCNAPI void _loadTextFile(::IClientInstance&, ::UIControl&, std::string const&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static float const& DEFAULT_SCROLL_SPEED();

    MCNAPI static float const& FAST_SCROLL_SPEED();

    MCNAPI static int const& FILE_PADDING();

    MCNAPI static float const& IMAGE_SCALE();

    MCNAPI static std::string_view const& INDENT_TEXT();

    MCNAPI static std::string_view const& SECTION_BORDER_TEXT();

    MCNAPI static int const& TEXT_PADDING();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::UIResolvedDef const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::shared_ptr<UICustomRenderer> $clone() const;

    MCNAPI bool $update(::IClientInstance&, ::UIControl&, ::UIScene const&);

    MCNAPI void $collectScreenEvents(std::queue<ScreenEvent, std::deque<ScreenEvent>>&);

    MCNAPI void $render(::MinecraftUIRenderContext&, ::IClientInstance&, ::UIControl&, int);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
