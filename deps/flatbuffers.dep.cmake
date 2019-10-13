download_project(
	PROJ flatbuffers
	GIT_REPOSITORY https://github.com/google/flatbuffers.git
	GIT_TAG tags/v1.11.0
	UPDATE_DISCONNECTED 1
	QUIET
)

add_subdirectory(${flatbuffers_SOURCE_DIR} ${flatbuffers_BINARY_DIR})
