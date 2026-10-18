#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/ChildInsertPosition.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/json/Value.h"

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
// clang-format on

class UIControlFactory : public ::std::enable_shared_from_this<::UIControlFactory> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IUIDefRepository const>> mUIDefRepository;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::FontRepository const>>   mFontRepository;
    ::ll::TypedStorage<8, 8, ::UISoundPlayer const&>                                   mSoundPlayer;
    ::ll::TypedStorage<8, 32, ::std::string>                                           mCurrentNamespace;
    ::ll::TypedStorage<8, 16, ::Json::Value>                                           mGlobalVars;
    ::ll::TypedStorage<8, 24, ::std::vector<::Json::Value*>>                           mVariablesStack;
    ::ll::TypedStorage<1, 1, bool>                                                     mLowMemoryMode;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::UIControl>>                            mInitialSelectedControl;
    // NOLINTEND

public:
    // prevent constructor by default
    UIControlFactory& operator=(UIControlFactory const&);
    UIControlFactory(UIControlFactory const&);
    UIControlFactory();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI UIControlFactory(
        ::Bedrock::NotNullNonOwnerPtr<::IUIDefRepository const> uiDefRepo,
        ::Json::Value const&                                    globalVars,
        ::UISoundPlayer const&                                  soundPlayer,
        ::Bedrock::NotNullNonOwnerPtr<::FontRepository const>   fontRepository,
        bool                                                    isLowMemory
    );

    MCAPI ::UIAnim* _addAnimToComponent(::std::string_view name, ::UIResolvedDef& def, ::UIControl& ownerControl);

    MCAPI ::std::shared_ptr<::UIControl> _createControlTree(
        ::UIControlFactoryContext const&,
        ::UIControl const&        templateControl,
        ::UIControl*              parent,
        ::ui::ChildInsertPosition childInsertPosition
    );

    MCAPI ::std::shared_ptr<::UIControl> _createControlTree(
        ::UIControlFactoryContext const& context,
        ::std::string_view               name,
        ::ControlScreenAction&           controlScreenAction,
        ::UIControl*                     parent,
        ::ui::ChildInsertPosition        childInsertPosition,
        ::Json::Value*                   additionalVars,
        bool                             isTemplateControl
    );

    MCAPI ::std::shared_ptr<::UIControl> _createControlTreeFromResolvedDef(
        ::UIControlFactoryContext const& context,
        ::UIResolvedDef const&           resolvedDef,
        ::UIControl*                     parentControl,
        ::ControlScreenAction&           controlScreenAction,
        ::ui::ChildInsertPosition        childInsertPosition,
        bool                             isTemplateControl
    );

    MCAPI ::std::shared_ptr<::UIControl> _createControlTreeRootOnly(
        ::UIControlFactoryContext const& context,
        ::std::string_view               name,
        ::ControlScreenAction&           controlScreenAction
    );

    MCAPI ::std::shared_ptr<::UIControl> _createFromResolvedDef(
        ::UIControlFactoryContext const& context,
        ::UIResolvedDef const&           resolvedDef,
        ::UIControl*                     parentControl,
        ::ControlScreenAction&           controlScreenAction,
        ::ui::ChildInsertPosition        childInsertPosition,
        bool                             isTemplateControl
    );

    MCAPI void _populateControl(::UIResolvedDef const& def, ::UIControl& control);

    MCAPI void _populateDataBindingComponent(::UIResolvedDef const& def, ::UIControl& ownerControl);

    MCAPI void _populateFocusComponent(::UIResolvedDef const& def, ::UIControl& ownerControl);

    MCAPI void _populateGridComponent(
        ::UIControlFactoryContext const& context,
        ::UIResolvedDef const&           def,
        ::UIControl&                     ownerControl
    );

    MCAPI void _populateInputComponent(::UIResolvedDef const& def, ::UIControl& ownerControl);

    MCAPI void _populateLayoutComponent(::UIResolvedDef const& def, ::UIControl& ownerControl);

    MCAPI void _populateSoundComponent(::UIResolvedDef const& def, ::UIControl& ownerControl, bool alwaysCreate);

    MCAPI void _populateSpriteComponent(::UIResolvedDef const& def, ::UIControl& ownerControl);

    MCAPI void _populateTextComponent(::UIResolvedDef const& def, ::UIControl& ownerControl);

    MCAPI ::std::shared_ptr<::UIControl> createControlTree(
        ::UIControl const&        templateControl,
        ::UIControl*              parent,
        ::ui::ChildInsertPosition childInsertPosition
    );

    MCAPI ::std::shared_ptr<::UIControl> createControlTree(
        ::std::string_view        name,
        ::ControlScreenAction&    controlScreenAction,
        ::UIControl*              parent,
        ::ui::ChildInsertPosition childInsertPosition,
        ::Json::Value*            additionalVars,
        bool                      isTemplateControl
    );

    MCAPI ::std::shared_ptr<::UIControl>
    createControlTreeRootOnly(::std::string_view name, ::ControlScreenAction& controlScreenAction);

    MCAPI ~UIControlFactory();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void
    _createGradientRenderer(::CustomRenderComponent& customRenderComponent, ::UIResolvedDef const& def);

    MCAPI static void _populateButtonComponent(::UIResolvedDef const& def, ::UIControl& ownerControl);

    MCAPI static void _populateCollectionComponent(::UIResolvedDef const& def, ::UIControl& ownerControl);

    MCAPI static void _populateDebugRendererComponent(::UIResolvedDef const& def, ::UIControl& control);

    MCAPI static void _populateGestureComponent(::UIResolvedDef const& def, ::UIControl& ownerControl);

    MCAPI static void _populatePageIndicatorManagerComponent(::UIResolvedDef const& def, ::UIControl& ownerControl);

    MCAPI static void
    _populateTextToSpeechComponent(::UIResolvedDef const& def, ::UIControl& ownerControl, int controlPriorityDefault);

    MCAPI static void _populateToggleComponent(::UIResolvedDef const& def, ::UIControl& ownerControl);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Bedrock::NotNullNonOwnerPtr<::IUIDefRepository const> uiDefRepo,
        ::Json::Value const&                                    globalVars,
        ::UISoundPlayer const&                                  soundPlayer,
        ::Bedrock::NotNullNonOwnerPtr<::FontRepository const>   fontRepository,
        bool                                                    isLowMemory
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
class UIControlFactory {};
#endif // @header-generator platform
#endif // @header-generator platform
