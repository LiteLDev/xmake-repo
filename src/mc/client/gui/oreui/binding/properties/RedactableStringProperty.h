#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/safety/RedactableString.h"

// auto generated forward declare list
// clang-format off
class ProfanityContext;
namespace OreUI::Detail { class IPropertyObject; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/safety/RedactableString.h"

// auto generated forward declare list
// clang-format off
class ProfanityContext;
namespace OreUI::Detail { class IPropertyObject; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
class RedactableStringProperty {
public:
    // RedactableStringProperty inner types define
    using ParentPtr = ::OreUI::Detail::IPropertyObject*;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 168>                                   mProperty;
    ::ll::TypedStorage<8, 56, ::Bedrock::Safety::RedactableString> mRedactableString;
    ::ll::UntypedStorage<8, 24>                                    mProfanityContext;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>     mProfanityToggleSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    RedactableStringProperty& operator=(RedactableStringProperty const&);
    RedactableStringProperty(RedactableStringProperty const&);
    RedactableStringProperty();
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class RedactableStringProperty {
public:
    // RedactableStringProperty inner types define
    using ParentPtr = ::OreUI::Detail::IPropertyObject*;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>>                 mProperty;
    ::ll::TypedStorage<8, 72, ::Bedrock::Safety::RedactableString>               mRedactableString;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::ProfanityContext>> mProfanityContext;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                   mProfanityToggleSubscription;
    // NOLINTEND
};
#else // @header-generator platform
class RedactableStringProperty {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
