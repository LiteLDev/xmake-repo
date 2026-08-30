#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class IRandom;
class JigsawStructureRegistry;
struct StructureTemplateRegistrationContext;
namespace Core { template<typename T0> class SimpleWeightedEntry; }
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
        ::ll::TypedStorage<8, 24, std::vector<std::pair<std::string, std::string>>> mLookupTable;
        // NOLINTEND

    public:
        // prevent constructor by default
        PoolAliasLookup& operator=(PoolAliasLookup const&);

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI std::string_view getOrDefault(std::string_view, std::string_view) const;

        MCNAPI void insert(std::string const&, std::string const&);

        MCNAPI ~PoolAliasLookup();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    using Ptr = std::shared_ptr<PoolAliasBinding>;

    using BoundAliasGroup = std::vector<std::shared_ptr<PoolAliasBinding>>;

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void appendResolvedAliases(::IRandom&, ::PoolAliasBinding::PoolAliasLookup&) const = 0;

    virtual ~PoolAliasBinding() = default;

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
    // NOLINTEND
};
