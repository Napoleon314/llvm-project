set( LLVM_LINK_COMPONENTS
  ${LLVM_TARGETS_TO_BUILD}
  Option
  Support
  )

add_clang_executable(clang-generator
  ClangGenerator.cpp
  )

clang_target_link_libraries(clang-generator
  PRIVATE
  libclang
  )
