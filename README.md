# fty-template-rest

This is just a template for REST API servlet repository in a 42ITy ecosystem.

## How to create your agent

To create your rest servlet, you have to specify this template when
creating a repository on github.

Then you have to update the project.xml and license.xml files, and
run from the local clone of your repository the tool ProjectXML from
the repo FTY.

You will need 2 terminals: one for launching the update, the other
for running the additional REST preparation script before you analyse
the diff back in the first one.

```bash
../FTY/ProjectXML -A
```

Before you continue with the git difftool, open the second terminal
and run:

```bash
./create_rest_package.sh
```

Then you can continue with the git difftool.

Be careful, lot of files need to be updated with the difftool and not
just overwritten with generated contents. You will find a note on the
top of each such as "# Note: this file is customized..."

Then you can add all the files needed: Example with generation of the template:

```bash
	doc/fty-template-rest.adoc
	include/fty-template-rest.h
	include/fty_template_rest_library.h
	packaging/debian/fty-template-rest.dsc.obs
	packaging/debian/libfty-template-rest1.install
	packaging/redhat/fty-template-rest.spec
	src/fty_template_rest_classes.h
	src/fty_template_rest_private_selftest.cc
	src/fty_template_rest_selftest.cc
	src/libfty_template_rest.pc.in
	src/rest_template_GET.ecpp
	src/rest_template_GET.h
```

Do not forget to rename src/40_template-rest.xml and update it.
Do not forget to update the file install.xml

Each time you run ../FTY/ProjectXML -A do not forget to run also
./create_rest_package.sh

See existing components, such as fty-example, for recommended content and
structure of the README of a realistic codebase.
