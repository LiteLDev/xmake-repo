#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/AnchorPoint.h"
#include "mc/client/gui/AnimationType.h"
#include "mc/client/gui/ClipDirection.h"
#include "mc/client/gui/Draggable.h"
#include "mc/client/gui/FontSize.h"
#include "mc/client/gui/OrientationType.h"
#include "mc/client/gui/PriorityRule.h"
#include "mc/client/gui/TextAlignment.h"
#include "mc/client/gui/UIDefType.h"
#include "mc/client/gui/controls/BindingCondition.h"
#include "mc/client/gui/controls/BindingType.h"
#include "mc/client/gui/controls/SliderManagerBehavior.h"
#include "mc/client/gui/controls/ToggleManagerBehavior.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IUIDefRepository;
class UIPropertyBag;
class UiExpression;
class Vec2;
namespace Json { class Value; }
namespace mce { class Color; }
namespace ui { struct LayoutOffset; }
namespace ui { struct SliceSize; }
// clang-format on

class UIResolvedDef {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<1, 1, bool> mIgnored;
    ::ll::TypedStorage<8, 24, std::string const> mDefNamespace;
    ::ll::TypedStorage<8, 24, std::string const> mDefName;
    ::ll::TypedStorage<8, 8, ::Json::Value const&> mBaseVal;
    ::ll::TypedStorage<8, 8, ::Json::Value const&> mOverrideVal;
    ::ll::UntypedStorage<8, 16> mVariables;
    ::ll::TypedStorage<8, 8, std::vector<Json::Value*>*> mVariablesStack;
    ::ll::TypedStorage<8, 24, std::set<std::string, std::less<void>, std::allocator<std::string>>> mUnvalidatedProperties;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    UIResolvedDef& operator=(UIResolvedDef const&);
    UIResolvedDef();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI UIResolvedDef(std::vector<Json::Value*>*, ::Json::Value const&);

    MCNAPI UIResolvedDef(
        std::vector<Json::Value*>*,
        std::string_view,
        std::string_view,
        ::Json::Value const&,
        ::Json::Value const&
    );

    MCNAPI ::Json::Value const& _evaluate(::Json::Value const&, bool) const;

    MCNAPI void _validateProperty(std::string_view) const;

    MCNAPI void foreachMemberNames(std::function<void(std::string_view)>) const;

    MCNAPI ::ui::AnchorPoint getAsAnchorPoint(std::string_view, ::ui::AnchorPoint const) const;

    MCNAPI ::ui::AnimationType getAsAnimationType(std::string_view, ::ui::AnimationType const) const;

    MCNAPI ::BindingCondition getAsBindingCondition(std::string_view) const;

    MCNAPI ::BindingType getAsBindingType(std::string_view) const;

    MCNAPI bool getAsBool(std::string_view, bool const) const;

    MCNAPI uint getAsButtonId(std::string_view, uint const) const;

    MCNAPI ::ui::ClipDirection getAsClipDirection(std::string_view, ::ui::ClipDirection const) const;

    MCNAPI ::Vec2 getAsClipOffset(std::string_view) const;

    MCNAPI ::mce::Color getAsColor(std::string_view, ::mce::Color const&) const;

    MCNAPI ::ui::Draggable getAsDraggable(std::string_view, ::ui::Draggable const) const;

    MCNAPI float getAsFloat(std::string_view, float const) const;

    MCNAPI ::ui::FontSize getAsFontSize(std::string_view, ::ui::FontSize const) const;

    MCNAPI ::glm::vec<2, int, (glm::qualifier)0>
    getAsGridSize(std::string_view, ::glm::vec<2, int, (glm::qualifier)0> const&) const;

    MCNAPI int getAsInt(std::string_view, int const) const;

    MCNAPI ::ui::LayoutOffset getAsLayoutSize(std::string_view, ::ui::LayoutOffset const&) const;

    MCNAPI ::ui::OrientationType getAsOrientation(std::string_view, ::ui::OrientationType const) const;

    MCNAPI ::ui::PriorityRule getAsPriorityRule(std::string_view, ::ui::PriorityRule const) const;

    MCNAPI std::unique_ptr<UIPropertyBag> getAsPropertyBag(std::string_view, std::unique_ptr<UIPropertyBag>) const;

    MCNAPI ::UiExpression getAsPropetyEvaluation(std::string_view) const;

    MCNAPI ::glm::vec<2, float, (glm::qualifier)0>
    getAsSize(std::string_view, ::glm::vec<2, float, (glm::qualifier)0> const&) const;

    MCNAPI ::ui::SliceSize getAsSliceSize(std::string_view, ::ui::SliceSize const&) const;

    MCNAPI ::SliderManagerBehavior getAsSliderManagerBehavior(std::string_view, ::SliderManagerBehavior const) const;

    MCNAPI std::string getAsString(std::string_view, std::string_view) const;

    MCNAPI std::vector<std::string> getAsStringVector(std::string_view, std::vector<std::string> const&) const;

    MCNAPI ::ui::TextAlignment getAsTextAlignment(std::string_view, ::ui::TextAlignment const) const;

    MCNAPI std::string getAsTextureString() const;

    MCNAPI ::ToggleManagerBehavior getAsToggleManagerBehavior(std::string_view, ::ToggleManagerBehavior const) const;

    MCNAPI ::glm::vec<2, float, (glm::qualifier)0>
    getAsUV(std::string_view, ::glm::vec<2, float, (glm::qualifier)0> const&) const;

    MCNAPI ::glm::vec<2, float, (glm::qualifier)0>
    getAsUVSize(std::string_view, ::glm::vec<2, float, (glm::qualifier)0> const&) const;

    MCNAPI uint getAsUnsignedInt(std::string_view, uint const) const;

    MCNAPI ::UIDefType getDefType() const;

    MCNAPI std::string const& getName() const;

    MCNAPI std::string const& getNamespace() const;

    MCNAPI ::Json::Value const& getValue(std::string_view, bool) const;

    MCNAPI bool hasValue(std::string_view) const;

    MCNAPI bool isIgnored() const;

    MCNAPI bool isNamed() const;

    MCNAPI void markUnused(std::string_view) const;

    MCNAPI ~UIResolvedDef();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::UIResolvedDef create(
        ::gsl::not_null<Bedrock::NonOwnerPointer<const IUIDefRepository>>,
        std::vector<Json::Value*>*,
        std::string_view,
        std::string_view
    );

    MCNAPI static ::UIResolvedDef createWithDef(
        ::gsl::not_null<Bedrock::NonOwnerPointer<const IUIDefRepository>>,
        std::vector<Json::Value*>*,
        std::string_view,
        ::Json::Value const&
    );

    MCNAPI static ::Json::Value evaluate(::Json::Value const&, std::vector<Json::Value*> const&, ::Json::Value const*);

    MCNAPI static void
    parseName(std::string_view, std::string&, std::string&, std::string&, std::vector<Json::Value*>*);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::UIResolvedDef& mNull();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::vector<Json::Value*>*, ::Json::Value const&);

    MCNAPI void*
    $ctor(std::vector<Json::Value*>*, std::string_view, std::string_view, ::Json::Value const&, ::Json::Value const&);
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
#include "mc/client/gui/AnchorPoint.h"
#include "mc/client/gui/AnimationType.h"
#include "mc/client/gui/ClipDirection.h"
#include "mc/client/gui/Draggable.h"
#include "mc/client/gui/FontSize.h"
#include "mc/client/gui/OrientationType.h"
#include "mc/client/gui/PriorityRule.h"
#include "mc/client/gui/TextAlignment.h"
#include "mc/client/gui/UIDefType.h"
#include "mc/client/gui/controls/BindingCondition.h"
#include "mc/client/gui/controls/BindingType.h"
#include "mc/client/gui/controls/SliderManagerBehavior.h"
#include "mc/client/gui/controls/ToggleManagerBehavior.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/json/Value.h"

// auto generated forward declare list
// clang-format off
class IUIDefRepository;
class UIPropertyBag;
class UiExpression;
class Vec2;
namespace mce { class Color; }
namespace ui { struct SliceSize; }
// clang-format on

class UIResolvedDef {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                          mIgnored;
    ::ll::TypedStorage<8, 32, ::std::string const>                          mDefNamespace;
    ::ll::TypedStorage<8, 32, ::std::string const>                          mDefName;
    ::ll::TypedStorage<8, 8, ::Json::Value const&>                          mBaseVal;
    ::ll::TypedStorage<8, 8, ::Json::Value const&>                          mOverrideVal;
    ::ll::TypedStorage<8, 16, ::Json::Value>                                mVariables;
    ::ll::TypedStorage<8, 8, ::std::vector<::Json::Value*>*>                mVariablesStack;
    ::ll::TypedStorage<8, 16, ::std::set<::std::string, ::std::less<void>>> mUnvalidatedProperties;
    // NOLINTEND

public:
    // prevent constructor by default
    UIResolvedDef& operator=(UIResolvedDef const&);
    UIResolvedDef(UIResolvedDef const&);
    UIResolvedDef();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI UIResolvedDef(
        ::std::vector<::Json::Value*>* variablesStack,
        ::std::string_view             defNamespace,
        ::std::string_view             defName,
        ::Json::Value const&           baseVal,
        ::Json::Value const&           overrideVal
    );

    MCAPI ::Json::Value const& _evaluate(::Json::Value const& value, bool forceExpressionEval) const;

    MCAPI void _validateProperty(::std::string_view name) const;

    MCAPI void foreachMemberNames(::std::function<void(::std::string_view)> predicate) const;

    MCAPI ::ui::AnchorPoint getAsAnchorPoint(::std::string_view key, ::ui::AnchorPoint defaultValue) const;

    MCAPI ::ui::AnimationType getAsAnimationType(::std::string_view key, ::ui::AnimationType defaultValue) const;

    MCAPI ::BindingCondition getAsBindingCondition(::std::string_view key) const;

    MCAPI ::BindingType getAsBindingType(::std::string_view key) const;

    MCAPI uint getAsButtonId(::std::string_view key, uint defaultValue) const;

    MCAPI ::ui::ClipDirection getAsClipDirection(::std::string_view key, ::ui::ClipDirection defaultValue) const;

    MCAPI ::Vec2 getAsClipOffset(::std::string_view key) const;

    MCAPI ::mce::Color getAsColor(::std::string_view key, ::mce::Color const& defaultValue) const;

    MCAPI ::ui::Draggable getAsDraggable(::std::string_view key, ::ui::Draggable defaultValue) const;

    MCAPI ::ui::FontSize getAsFontSize(::std::string_view key, ::ui::FontSize defaultValue) const;

    MCAPI ::glm::ivec2 getAsGridSize(::std::string_view key, ::glm::ivec2 const& defaultValue) const;

    MCAPI ::ui::OrientationType getAsOrientation(::std::string_view key, ::ui::OrientationType defaultValue) const;

    MCAPI ::ui::PriorityRule getAsPriorityRule(::std::string_view key, ::ui::PriorityRule defaultValue) const;

    MCAPI ::std::unique_ptr<::UIPropertyBag>
    getAsPropertyBag(::std::string_view key, ::std::unique_ptr<::UIPropertyBag> defaultValue) const;

    MCAPI ::UiExpression getAsPropetyEvaluation(::std::string_view key) const;

    MCAPI ::glm::vec2 getAsSize(::std::string_view key, ::glm::vec2 const& defaultValue) const;

    MCAPI ::ui::SliceSize getAsSliceSize(::std::string_view key, ::ui::SliceSize const& defaultValue) const;

    MCAPI ::SliderManagerBehavior getAsSliderManagerBehavior(::std::string_view key, ::SliderManagerBehavior) const;

    MCAPI ::std::string getAsString(::std::string_view key, ::std::string_view defaultValue) const;

    MCAPI ::std::vector<::std::string>
    getAsStringVector(::std::string_view key, ::std::vector<::std::string> const& defaultValue) const;

    MCAPI ::ui::TextAlignment getAsTextAlignment(::std::string_view key, ::ui::TextAlignment defaultValue) const;

    MCAPI ::std::string getAsTextureString() const;

    MCAPI ::ToggleManagerBehavior getAsToggleManagerBehavior(::std::string_view key, ::ToggleManagerBehavior) const;

    MCFOLD ::glm::vec2 getAsUV(::std::string_view key, ::glm::vec2 const& defaultValue) const;

    MCFOLD ::glm::vec2 getAsUVSize(::std::string_view key, ::glm::vec2 const& defaultValue) const;

    MCAPI ::UIDefType getDefType() const;

    MCAPI ::Json::Value const& getValue(::std::string_view key, bool forceExpressionEval) const;

    MCAPI bool hasValue(::std::string_view key) const;

    MCAPI ~UIResolvedDef();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::UIResolvedDef create(
        ::Bedrock::NotNullNonOwnerPtr<::IUIDefRepository const> defRepo,
        ::std::vector<::Json::Value*>*                          variablesStack,
        ::std::string_view                                      currNamespace,
        ::std::string_view                                      name
    );

    MCAPI static ::UIResolvedDef createWithDef(
        ::Bedrock::NotNullNonOwnerPtr<::IUIDefRepository const> defRepo,
        ::std::vector<::Json::Value*>*                          variablesStack,
        ::std::string_view                                      currNamespace,
        ::Json::Value const&                                    def
    );

    MCAPI static ::Json::Value evaluate(
        ::Json::Value const&                 value,
        ::std::vector<::Json::Value*> const& variablesStack,
        ::Json::Value const*                 optionalLocalStack
    );

    MCAPI static void parseName(
        ::std::string_view             input,
        ::std::string&                 outName,
        ::std::string&                 outNamespace,
        ::std::string&                 outRef,
        ::std::vector<::Json::Value*>* variablesStack
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::UIResolvedDef& mNull();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::vector<::Json::Value*>* variablesStack,
        ::std::string_view             defNamespace,
        ::std::string_view             defName,
        ::Json::Value const&           baseVal,
        ::Json::Value const&           overrideVal
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
class UIResolvedDef {};
#endif // @header-generator platform
#endif // @header-generator platform
