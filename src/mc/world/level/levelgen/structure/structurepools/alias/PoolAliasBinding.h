#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class BlockPos;
#else // @header-generator platform
#endif // @header-generator platform
class IRandom;
#if defined(LL_PLAT_A) // @header-generator platform
class JigsawStructureRegistry;
struct StructureTemplateRegistrationContext;
namespace Core { template<typename T0> class SimpleWeightedEntry; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class PoolAliasBinding {
public:
    // PoolAliasBinding inner types declare
    // clang-format off
    class PoolAliasLookup;
    // clang-format on

    // PoolAliasBinding inner types define
    class PoolAliasLookup {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 24, std::vector<std::pair<std::string, std::string>>> mLookupTable;
#else // @header-generator platform
        ::ll::TypedStorage<8, 24, ::std::vector<::std::pair<::std::string, ::std::string>>> mLookupTable;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

    public:
        // prevent constructor by default
        PoolAliasLookup& operator=(PoolAliasLookup const&);
#else // @header-generator platform
#endif // @header-generator platform

    public:
        // member functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI std::string_view getOrDefault(std::string_view, std::string_view) const;

        MCNAPI void insert(std::string const&, std::string const&);

        MCNAPI ~PoolAliasLookup();
#else // @header-generator platform
        MCAPI ~PoolAliasLookup();
#endif // @header-generator platform
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI void $dtor();
#else // @header-generator platform
        MCFOLD void $dtor();
#endif // @header-generator platform
        // NOLINTEND
    };

#if defined(LL_PLAT_A) // @header-generator platform
    using Ptr = std::shared_ptr<PoolAliasBinding>;
#else // @header-generator platform
    using BoundAliasGroup = ::std::vector<::std::shared_ptr<::PoolAliasBinding>>;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    using BoundAliasGroup = std::vector<std::shared_ptr<PoolAliasBinding>>;
#else // @header-generator platform
    using Ptr = ::std::shared_ptr<::PoolAliasBinding>;
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual void appendResolvedAliases(::IRandom&, ::PoolAliasBinding::PoolAliasLookup&) const = 0;
#else // @header-generator platform
    virtual void
    appendResolvedAliases(::IRandom& random, ::PoolAliasBinding::PoolAliasLookup& inOutResolvedAliases) const = 0;

    virtual void forAllTargets(::std::function<void(::std::string const&, ::std::string const&)> const& fn) const = 0;
#endif // @header-generator platform

    virtual ~PoolAliasBinding() = default;
#if defined(LL_PLAT_A) // @header-generator platform

    virtual void forAllTargets(std::function<void(const std::string&, const std::string&)> const&) const = 0;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::shared_ptr<PoolAliasBinding> direct(std::string&&, std::string&&);

    MCNAPI static std::shared_ptr<PoolAliasBinding>
    random(std::string&&, std::vector<Core::SimpleWeightedEntry<std::string>>&&);

    MCNAPI static std::shared_ptr<PoolAliasBinding>
    randomGroup(std::vector<Core::SimpleWeightedEntry<std::vector<std::shared_ptr<PoolAliasBinding>>>>&&);

    MCNAPI static void registerTargetsAsPools(
        ::JigsawStructureRegistry&,
        ::StructureTemplateRegistrationContext&,
        std::string_view,
        std::vector<std::shared_ptr<PoolAliasBinding>> const&
    );

    MCNAPI static ::PoolAliasBinding::PoolAliasLookup
    resolvePoolAliases(std::vector<std::shared_ptr<PoolAliasBinding>> const&, ::BlockPos const&, long);
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND
};
