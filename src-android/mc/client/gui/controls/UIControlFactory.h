#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/ChildInsertPosition.h"
#include "mc/client/gui/TileDirection.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class ControlScreenAction;
class CustomRenderComponent;
class FontRepository;
class IUIDefRepository;
class UIAnim;
class UIControl;
class UIControlFactoryContext;
class UIResolvedDef;
class UISoundPlayer;
namespace Json { class Value; }
// clang-format on

class UIControlFactory : public ::std::enable_shared_from_this<UIControlFactory> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                          mUIDefRepository;
    ::ll::UntypedStorage<8, 24>                          mFontRepository;
    ::ll::TypedStorage<8, 8, ::UISoundPlayer const&>     mSoundPlayer;
    ::ll::TypedStorage<8, 24, std::string>               mCurrentNamespace;
    ::ll::UntypedStorage<8, 16>                          mGlobalVars;
    ::ll::TypedStorage<8, 24, std::vector<Json::Value*>> mVariablesStack;
    ::ll::TypedStorage<1, 1, bool>                       mLowMemoryMode;
    ::ll::TypedStorage<8, 16, std::weak_ptr<UIControl>>  mInitialSelectedControl;
    // NOLINTEND

public:
    // prevent constructor by default
    UIControlFactory& operator=(UIControlFactory const&);
    UIControlFactory(UIControlFactory const&);
    UIControlFactory();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI UIControlFactory(
        ::gsl::not_null<Bedrock::NonOwnerPointer<const IUIDefRepository>>,
        ::Json::Value const&,
        ::UISoundPlayer const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<const FontRepository>>,
        bool
    );

    MCNAPI ::UIAnim* _addAnimToComponent(std::string_view, ::UIResolvedDef&, ::UIControl&);

    MCNAPI std::shared_ptr<UIControl>
    _createControlTree(::UIControlFactoryContext const&, ::UIControl const&, ::UIControl*, ::ui::ChildInsertPosition);

    MCNAPI std::shared_ptr<UIControl> _createControlTree(
        ::UIControlFactoryContext const&,
        std::string_view,
        ::ControlScreenAction&,
        ::UIControl*,
        ::ui::ChildInsertPosition,
        ::Json::Value*,
        bool
    );

    MCNAPI std::shared_ptr<UIControl> _createControlTreeFromResolvedDef(
        ::UIControlFactoryContext const&,
        ::UIResolvedDef const&,
        ::UIControl*,
        ::ControlScreenAction&,
        ::ui::ChildInsertPosition,
        bool
    );

    MCNAPI std::shared_ptr<UIControl>
           _createControlTreeRootOnly(::UIControlFactoryContext const&, std::string_view, ::ControlScreenAction&);

    MCNAPI std::shared_ptr<UIControl> _createFromResolvedDef(
        ::UIControlFactoryContext const&,
        ::UIResolvedDef const&,
        ::UIControl*,
        ::ControlScreenAction&,
        ::ui::ChildInsertPosition,
        bool
    );

    MCNAPI void _createGradientRenderer(::CustomRenderComponent&, ::UIResolvedDef const&);

    MCNAPI void _populateButtonComponent(::UIResolvedDef const&, ::UIControl&);

    MCNAPI void _populateCollectionComponent(::UIResolvedDef const&, ::UIControl&);

    MCNAPI void _populateControl(::UIResolvedDef const&, ::UIControl&);

    MCNAPI void _populateDataBindingComponent(::UIResolvedDef const&, ::UIControl&);

    MCNAPI void _populateDebugRendererComponent(::UIResolvedDef const&, ::UIControl&);

    MCNAPI void _populateFocusComponent(::UIResolvedDef const&, ::UIControl&);

    MCNAPI void _populateGestureComponent(::UIResolvedDef const&, ::UIControl&);

    MCNAPI void _populateGridComponent(::UIControlFactoryContext const&, ::UIResolvedDef const&, ::UIControl&);

    MCNAPI void _populateInputComponent(::UIResolvedDef const&, ::UIControl&);

    MCNAPI void _populateLayoutComponent(::UIResolvedDef const&, ::UIControl&);

    MCNAPI void _populatePageIndicatorManagerComponent(::UIResolvedDef const&, ::UIControl&);

    MCNAPI void _populateSoundComponent(::UIResolvedDef const&, ::UIControl&, bool);

    MCNAPI void _populateSpriteComponent(::UIResolvedDef const&, ::UIControl&);

    MCNAPI void _populateTextComponent(::UIResolvedDef const&, ::UIControl&);

    MCNAPI void _populateTextToSpeechComponent(::UIResolvedDef const&, ::UIControl&, int);

    MCNAPI void _populateToggleComponent(::UIResolvedDef const&, ::UIControl&);

    MCNAPI std::shared_ptr<UIControl> createControlTree(::UIControl const&, ::UIControl*, ::ui::ChildInsertPosition);

    MCNAPI std::shared_ptr<UIControl> createControlTree(
        std::string_view,
        ::ControlScreenAction&,
        ::UIControl*,
        ::ui::ChildInsertPosition,
        ::Json::Value*,
        bool
    );

    MCNAPI std::shared_ptr<UIControl> createControlTreeRootOnly(std::string_view, ::ControlScreenAction&);

    MCNAPI std::shared_ptr<UIControl> getInitSelectedControl() const;

    MCNAPI ::UIResolvedDef getUIDef(std::string_view);

    MCNAPI void setGlobalVars(::Json::Value const&);

    MCNAPI ~UIControlFactory();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::gsl::not_null<Bedrock::NonOwnerPointer<const IUIDefRepository>>,
        ::Json::Value const&,
        ::UISoundPlayer const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<const FontRepository>>,
        bool
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
