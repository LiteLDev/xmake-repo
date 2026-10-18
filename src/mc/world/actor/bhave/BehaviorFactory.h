#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BehaviorDefinition;
class BehaviorNode;
class BehaviorTreeDefinitionPtr;
namespace Json { class Value; }
// clang-format on

class BehaviorFactory {
public:
    // BehaviorFactory inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    using DefinitionCreator = std::function<std::unique_ptr<BehaviorDefinition>()>;
#else // @header-generator platform
    using DefinitionCreator = ::std::function<::std::unique_ptr<::BehaviorDefinition>()>;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    using NodeCreator = std::function<std::unique_ptr<BehaviorNode>()>;
#else // @header-generator platform
    using NodeCreator = ::std::function<::std::unique_ptr<::BehaviorNode>()>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::pair<std::function<std::unique_ptr<BehaviorDefinition> ()>, std::function<std::unique_ptr<BehaviorNode> ()>>>> mFactoryPairs;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<
            ::std::string,
            ::std::pair<
                ::std::function<::std::unique_ptr<::BehaviorDefinition>()>,
                ::std::function<::std::unique_ptr<::BehaviorNode>()>>>>
        mFactoryPairs;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI BehaviorFactory();
#else // @header-generator platform
    MCAPI void _initNodes();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _initNodes();
#else // @header-generator platform
    MCAPI ::std::unique_ptr<::BehaviorDefinition>
    loadNodeDefinition(::std::string const& name, ::Json::Value root, ::BehaviorTreeDefinitionPtr& ptr) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unique_ptr<BehaviorDefinition>
           loadNodeDefinition(std::string const&, ::Json::Value, ::BehaviorTreeDefinitionPtr&) const;

    MCNAPI void registerNodePair(
        std::string const&,
        std::function<std::unique_ptr<BehaviorDefinition>()>,
        std::function<std::unique_ptr<BehaviorNode>()>
#else // @header-generator platform
    MCAPI void registerNodePair(
        ::std::string const&                                       id,
        ::std::function<::std::unique_ptr<::BehaviorDefinition>()> definitionCreator,
        ::std::function<::std::unique_ptr<::BehaviorNode>()>       nodeCreator
#endif // @header-generator platform
    );
#if defined(LL_PLAT_A) // @header-generator platform
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
#else // @header-generator platform
    MCAPI ::std::unique_ptr<::BehaviorDefinition> tryGetDefinition(::std::string const& id) const;
#endif // @header-generator platform
    // NOLINTEND
};
