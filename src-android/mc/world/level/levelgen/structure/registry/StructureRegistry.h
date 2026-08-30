#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace br::worldgen { struct JigsawStructure; }
// clang-format on

namespace br::worldgen {

class StructureRegistry {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 56, ::entt::dense_map<std::string, std::shared_ptr<br::worldgen::JigsawStructure>, std::hash<std::string>, std::equal_to<void>, std::allocator<std::pair<const std::string, std::shared_ptr<br::worldgen::JigsawStructure>>>>> mStructures;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::entt::internal::dense_map_iterator<
        const entt::internal::dense_map_node<std::string, std::shared_ptr<br::worldgen::JigsawStructure>>*>
    begin() const;

    MCNAPI ::entt::internal::dense_map_iterator<
        const entt::internal::dense_map_node<std::string, std::shared_ptr<br::worldgen::JigsawStructure>>*>
    end() const;

    MCNAPI std::shared_ptr<const br::worldgen::JigsawStructure> get(std::string_view) const;

    MCNAPI ulong size() const;
    // NOLINTEND
};

} // namespace br::worldgen
