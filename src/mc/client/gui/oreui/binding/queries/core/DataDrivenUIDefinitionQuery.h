#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/properties/PropertyVector.h"
#include "mc/client/gui/oreui/binding/queries/core/DefinitionType.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class IDataDrivenUIRepository;
namespace OreUI { class DataDrivenUIGenericNode; }
namespace OreUI { class GameDependencies; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/properties/PropertyVector.h"
#include "mc/client/gui/oreui/binding/queries/core/DefinitionType.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class IDataDrivenUIRepository;
namespace OreUI { class DataDrivenUIGenericNode; }
namespace OreUI { class GameDependencies; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
class DataDrivenUIDefinitionQuery : public ::OreUI::QueryBase<OreUI::DataDrivenUIDefinitionQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 104>                               mChildrenNodes;
    ::ll::UntypedStorage<8, 168>                               mSourcePackId;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnCompositionsReloadedSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    DataDrivenUIDefinitionQuery();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DataDrivenUIDefinitionQuery();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DataDrivenUIDefinitionQuery(::OreUI::GameDependencies const&, ::OreUI::DefinitionType, std::string const&);

    MCNAPI void _updateState(::IDataDrivenUIRepository&, ::OreUI::DefinitionType, std::string const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::OreUI::GameDependencies const&, ::OreUI::DefinitionType, std::string const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class DataDrivenUIDefinitionQuery : public ::OreUI::QueryBase<::OreUI::DataDrivenUIDefinitionQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        120,
        ::OreUI::PropertyVector<::OreUI::DataDrivenUIGenericNode, ::std::allocator<::OreUI::DataDrivenUIGenericNode>>>
                                                                 mChildrenNodes;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>> mSourcePackId;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>   mOnCompositionsReloadedSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    DataDrivenUIDefinitionQuery();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI DataDrivenUIDefinitionQuery(
        ::OreUI::GameDependencies const& game,
        ::OreUI::DefinitionType          definitionType,
        ::std::string const&             definitionId
    );

    MCAPI void _updateState(
        ::IDataDrivenUIRepository& dataDrivenUIRepository,
        ::OreUI::DefinitionType    definitionType,
        ::std::string const&       definitionId
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::OreUI::GameDependencies const& game,
        ::OreUI::DefinitionType          definitionType,
        ::std::string const&             definitionId
    );
    // NOLINTEND
};
#else // @header-generator platform
class DataDrivenUIDefinitionQuery {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
