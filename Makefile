HDS_SOURCES=$(shell find src -name '.hds')
C_SOURCES=$(shell find src -name '*.c')

CRIN_EXE="build/crin"

$(CRIN_EXE): $(HDS_SOURCES) $(C_SOURCES)
	hades \
		--output $(CRIN_EXE) \
		--main src/crin/main.hds \
		--module-path src \
		--c-sources "$(C_SOURCES)"

clean:
	rm $(CRIN_EXE)