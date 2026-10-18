#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/input/interface/IGamefaceTextInputProxy.h"

// auto generated forward declare list
// clang-format off
struct TextBoxSelection;
namespace OreUI { class IView; }
namespace OreUI { class ViewInputHandler; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/input/interface/IGamefaceTextInputProxy.h"

// auto generated forward declare list
// clang-format off
struct TextBoxSelection;
namespace OreUI { class IView; }
namespace OreUI { class ViewInputHandler; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
class GamefaceTextInputProxy : public ::IGamefaceTextInputProxy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                          mView;
    ::ll::TypedStorage<8, 8, ::OreUI::ViewInputHandler&> mInputHandler;
    // NOLINTEND

public:
    // prevent constructor by default
    GamefaceTextInputProxy& operator=(GamefaceTextInputProxy const&);
    GamefaceTextInputProxy(GamefaceTextInputProxy const&);
    GamefaceTextInputProxy();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~GamefaceTextInputProxy();

    virtual void imeStartComposition();

    virtual void imeUpdateCompositionText(std::string const&);

    virtual void imeReplaceCompositionTextRange(std::string const&, int, int);

    virtual void imeConfirmComposition();

    virtual void imeConfirmComposition(std::string const&);

    virtual void imeEndComposition();

    virtual void setText(std::string const&, ::TextBoxSelection);

    virtual void setSelection(::TextBoxSelection);

    virtual std::string getText() const;

    virtual ::TextBoxSelection getSelection() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI GamefaceTextInputProxy(::gsl::not_null<Bedrock::NonOwnerPointer<OreUI::IView>>, ::OreUI::ViewInputHandler&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::gsl::not_null<Bedrock::NonOwnerPointer<OreUI::IView>>, ::OreUI::ViewInputHandler&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $imeStartComposition();

    MCNAPI void $imeUpdateCompositionText(std::string const&);

    MCNAPI void $imeReplaceCompositionTextRange(std::string const&, int, int);

    MCNAPI void $imeConfirmComposition();

    MCNAPI void $imeConfirmComposition(std::string const&);

    MCNAPI void $imeEndComposition();

    MCNAPI void $setText(std::string const&, ::TextBoxSelection);

    MCNAPI void $setSelection(::TextBoxSelection);

    MCNAPI std::string $getText() const;

    MCNAPI ::TextBoxSelection $getSelection() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class GamefaceTextInputProxy : public ::IGamefaceTextInputProxy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::OreUI::IView>> mView;
    ::ll::TypedStorage<8, 8, ::OreUI::ViewInputHandler&>                     mInputHandler;
    // NOLINTEND

public:
    // prevent constructor by default
    GamefaceTextInputProxy& operator=(GamefaceTextInputProxy const&);
    GamefaceTextInputProxy(GamefaceTextInputProxy const&);
    GamefaceTextInputProxy();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~GamefaceTextInputProxy() /*override*/ = default;

    virtual void imeStartComposition() /*override*/;

    virtual void imeUpdateCompositionText(::std::string const& compositionString) /*override*/;

    virtual void imeReplaceCompositionTextRange(::std::string const& replacement, int from, int to) /*override*/;

    virtual void imeConfirmComposition(::std::string const& compositionString) /*override*/;

    virtual void imeConfirmComposition() /*override*/;

    virtual void imeEndComposition() /*override*/;

    virtual void setText(::std::string const& text, ::TextBoxSelection selection) /*override*/;

    virtual void setSelection(::TextBoxSelection selection) /*override*/;

    virtual ::std::string getText() const /*override*/;

    virtual ::TextBoxSelection getSelection() const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $imeStartComposition();

    MCAPI void $imeUpdateCompositionText(::std::string const& compositionString);

    MCAPI void $imeReplaceCompositionTextRange(::std::string const& replacement, int from, int to);

    MCAPI void $imeConfirmComposition(::std::string const& compositionString);

    MCAPI void $imeConfirmComposition();

    MCAPI void $imeEndComposition();

    MCAPI void $setText(::std::string const& text, ::TextBoxSelection selection);

    MCAPI void $setSelection(::TextBoxSelection selection);

    MCAPI ::std::string $getText() const;

    MCAPI ::TextBoxSelection $getSelection() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class GamefaceTextInputProxy {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
