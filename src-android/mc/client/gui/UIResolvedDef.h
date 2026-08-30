#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
