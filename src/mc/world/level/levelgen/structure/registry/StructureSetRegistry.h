#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace br::worldgen { struct StructureSet; }
// clang-format on

namespace br::worldgen {

class StructureSetRegistry {
public:
    // StructureSetRegistry inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    using Map = ::entt::dense_map<
        std::string,
        std::shared_ptr<br::worldgen::StructureSet>,
        std::hash<std::string>,
        std::equal_to<void>,
        std::allocator<std::pair<const std::string, std::shared_ptr<br::worldgen::StructureSet>>>>;
#else // @header-generator platform
    using Map = ::entt::dense_map<::std::string, ::std::shared_ptr<::br::worldgen::StructureSet>>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 56, ::entt::dense_map<std::string, std::shared_ptr<br::worldgen::StructureSet>, std::hash<std::string>, std::equal_to<void>, std::allocator<std::pair<const std::string, std::shared_ptr<br::worldgen::StructureSet>>>>> mStructureSets;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<8, 72, ::entt::dense_map<::std::string, ::std::shared_ptr<::br::worldgen::StructureSet>>>
        mStructureSets;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::entt::internal::dense_map_iterator<
        const entt::internal::dense_map_node<std::string, std::shared_ptr<br::worldgen::StructureSet>>*>
    begin() const;

    MCNAPI ::entt::internal::dense_map_iterator<
        const entt::internal::dense_map_node<std::string, std::shared_ptr<br::worldgen::StructureSet>>*>
    end() const;

    MCNAPI void record(std::string_view, std::shared_ptr<br::worldgen::StructureSet>&&);

    MCNAPI ulong size() const;
#else // @header-generator platform
    MCAPI void record(::std::string_view key, ::std::shared_ptr<::br::worldgen::StructureSet>&& set);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace br::worldgen
