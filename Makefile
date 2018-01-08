.PHONY: build clean test install uninstall doc clean

build:
	jbuilder build --dev

test:
	jbuilder runtest

install:
	jbuilder install

uninstall:
	jbuilder uninstall

doc:
	jbuilder build @doc

clean:
	jbuilder clean
